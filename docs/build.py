import markdown2
import html as html_module

def export(path, target):
    with open(path) as file:
        text = file.read()
    text = text.replace("[Index](https://maniospas.github.io/smoll/index.html)", "[GitHub](https://github.com/maniospas/smoll)")
    text = text.replace("[https://maniospas.github.io/smoll/](https://maniospas.github.io/smoll/)", "")

    html = markdown2.markdown(text, extras=['fenced-code-blocks', 'header-ids', 'smarty-pants', 'markdown-in-html', 'cuddled-lists'])
    smoll_highlight_script = r"""
    <script>
    (function(){
        function escapeHtml(s){
          return s;//.replace(/&/g,'&amp;').replace(/</g,'&lt;').replace(/>/g,'&gt;');
        }

        function highlightSmoll(raw){
          return escapeHtml(raw).replace(
            /("(?:[^"\\]|\\.)*"|#.*|\b(?:if|while|for|in|else|try|type|fail|mut|edit|on|unsafe_mut)\b|\b(?:rec|def|local|import|repo|as)\b|[+\-*/%=<>!&|^~:]+)/g,
            function(m){
              if(m[0]==='#') return '<span style="color:#777777">'+m+'</span>';
              if(m[0]==='"') return '<span style="color:#2c5b19">'+m+'</span>';
              if(/^(if|while|for|in|else|try|fail|mut|edit|unsafe_mut|on|type)$/.test(m)) return '<span style="color:#7a4f7d">'+m+'</span>';
              if(/^(rec|def|local|import|repo|repo|as)$/.test(m)) return '<span style="color:#8f1818">'+m+'</span>';
              return '<span style="color:#2e766b">'+m+'</span>';
            }
          );
        }

        window.highlightSmoll = highlightSmoll;

        function highlightAll(root){
          (root || document).querySelectorAll("pre > code").forEach(function(code){
            code.innerHTML = highlightSmoll(code.textContent);
          });
        }

        window.highlightAllSmoll = highlightAll;

        if(document.readyState === "loading")
          document.addEventListener("DOMContentLoaded", function(){ highlightAll(document); });
        else
          highlightAll(document);
    })();
    </script>
    """

    def convert_notice_boxes(value):
        for label, css_class in (("Warning", "box-warning"), ("Info", "box-info")):
            opening = "<p><em>" + label + ":"
            closing = "</em></p>"
            pos = 0
            while True:
                start = value.find(opening, pos)
                if start == -1:
                    break
                end = value.find(closing, start)
                if end == -1:
                    break
                content = value[start + len(opening):end].strip()
                box = '<div class="notice-box ' + css_class + '"><strong>' + label + ':</strong> ' + content + '</div>'
                value = value[:start] + box + value[end + len(closing):]
                pos = start + len(box)
        return value

    def strip_html_tags(value):
        result = []
        inside_tag = False
        for char in value:
            if char == "<":
                inside_tag = True
            elif char == ">":
                inside_tag = False
            elif not inside_tag:
                result.append(char)
        return html_module.unescape("".join(result))

    def find_tag_sections(value, tag):
        found = []
        marker = "<" + tag
        closing = "</" + tag + ">"
        pos = 0
        while True:
            start = value.find(marker, pos)
            if start == -1:
                return found
            open_end = value.find(">", start)
            close_start = value.find(closing, open_end)
            if open_end == -1 or close_start == -1:
                return found
            found.append((start, open_end + 1, close_start, close_start + len(closing)))
            pos = close_start + len(closing)

    def build_std_browser(html):
        definitions = []
        headings = find_tag_sections(html, "h1")

        for i, heading in enumerate(headings):
            section_end = headings[i + 1][0] if i + 1 < len(headings) else len(html)
            name = strip_html_tags(html[heading[1]:heading[2]]).strip()
            section = html[heading[3]:section_end]
            overloads = find_tag_sections(section, "h3")

            for j, overload in enumerate(overloads):
                overload_end = overloads[j + 1][0] if j + 1 < len(overloads) else len(section)
                overload_html = section[overload[0]:overload_end]
                text = " ".join(strip_html_tags(overload_html).split())
                marker = "Defined in:"
                marker_at = text.find(marker)
                if marker_at == -1:
                    continue

                after = text[marker_at + len(marker):].strip()
                defined_in = after.split()[0] if after else ""
                source_end = defined_in.find(".s")
                if source_end != -1:
                    defined_in = defined_in[:source_end + 2]
                defined_in = defined_in.replace("\\", "/")
                if not defined_in:
                    continue

                code_blocks = find_tag_sections(overload_html, "code")
                is_class = False
                if code_blocks:
                    first_code = strip_html_tags(
                        overload_html[code_blocks[0][1]:code_blocks[0][2]]
                    )
                    arrow = first_code.find("->")
                    if arrow != -1:
                        import re
                        # A class return starts a tagged record, e.g. {tag} or {tag, mut ...}.
                        is_class = re.search(r"\{tag(?=\s*[,}])", first_code[arrow + 2:]) is not None

                definitions.append({
                    "name": name,
                    "definedIn": defined_in,
                    "html": overload_html,
                    "text": text,
                    "isClass": is_class,
                })

        if not definitions:
            return html

        import json
        payload = json.dumps(definitions, ensure_ascii=False).replace("</", "<\\/")
        return """
<div class="std-browser">
  <div class="std-search-wrap"><input id="std-search" type="search" placeholder="Search definitions and documentation…" autocomplete="off"></div>
  <div class="std-workspace">
    <aside class="std-sidebar"><div id="std-current-path" class="std-current-path"></div><div id="std-nav" class="std-nav"></div></aside>
    <main id="std-content" class="std-content"></main>
  </div>
</div>
<script id="std-data" type="application/json">""" + payload + """</script>
"""

    html = convert_notice_boxes(html)

    if "std" in target:
        html = build_std_browser(html)

    run_button_script = "" if "playground" in target or "std" in target else """
    <script>
    document.addEventListener("DOMContentLoaded", () => {
        document.querySelectorAll("pre").forEach(pre => {
            if(pre.className==="skiptry") return;
            pre.style.position = "relative";
            const btn = document.createElement("a");
            btn.textContent = "▶ try it";
            btn.className = "runbutton";
            btn.style.cssText = "position:absolute;bottom:8px;right:8px;cursor:pointer;";
            btn.addEventListener("click", () => {
                const code = pre.querySelector("code")?.innerText ?? pre.innerText;
                const encoded = btoa(
                    String.fromCharCode(...new TextEncoder().encode(code))
                ).split('+').join('-').split('/').join('_');
                while (encoded.endsWith('=')) encoded = encoded.slice(0, -1);
                window.location.href = "playground.html?contents=" + encoded;
            });
            pre.appendChild(btn);
        });
    });
    </script>
    """

    std_filter_script = "" if "std" not in target else """
    <script>
    document.addEventListener("DOMContentLoaded", () => {
        const data = document.querySelector("#std-data");
        if (!data) return;

        const definitions = JSON.parse(data.textContent);
        const nav = document.querySelector("#std-nav");
        const content = document.querySelector("#std-content");
        const pathLine = document.querySelector("#std-current-path");
        const search = document.querySelector("#std-search");
        let currentPath = "";
        let selectedName = "";

        function escapeHtml(value) {
            let out = "";
            const chars = {"&":"&amp;", "<":"&lt;", ">":"&gt;", '"':"&quot;", "'":"&#39;"};
            for (const char of String(value)) out += chars[char] || char;
            return out;
        }

        function visibleDefinitions() {
            if (!currentPath) return definitions;
            if (currentPath.endsWith(".s")) return definitions.filter(d => d.definedIn === currentPath);
            return definitions.filter(d => d.definedIn.startsWith(currentPath + "/"));
        }

        function groupByName(items) {
            const groups = new Map();
            for (const item of items) {
                if (!groups.has(item.name)) groups.set(item.name, []);
                groups.get(item.name).push(item);
            }
            return groups;
        }

        function parseSearch(value) {
            const terms = [];
            let current = "";
            let quoted = false;
            const forbidden = "+/->()[].,";

            for (const char of String(value)) {
                if (char === '"') {
                    if (quoted) {
                        if (current) terms.push(current);
                        current = "";
                        quoted = false;
                    } else {
                        if (current.trim()) terms.push(current.trim());
                        current = "";
                        quoted = true;
                    }
                    continue;
                }

                if (!quoted && forbidden.includes(char)) {
                    return {terms: [], error: 'Special characters like + / - > ( ) [ ] . , must be quoted. Try searching for exact text such as "' + escapeHtml(value.trim()) + '".'};
                }

                if (!quoted && char === " ") {
                    if (current.trim()) terms.push(current.trim());
                    current = "";
                    continue;
                }
                current += char;
            }

            if (quoted) return {terms: [], error: 'Missing closing quote. Quote exact text with double quotes, for example "map(x)".'};
            if (current.trim()) terms.push(current.trim());
            return {terms, error: ""};
        }

        function highlightTerms(text, terms) {
            const source = String(text);
            if (!terms.length) return escapeHtml(source);
            const lower = source.toLowerCase();
            const ranges = [];
            for (const term of terms) {
                const needle = term.toLowerCase();
                if (!needle) continue;
                let pos = 0;
                while (pos < source.length) {
                    const hit = lower.indexOf(needle, pos);
                    if (hit === -1) break;
                    ranges.push([hit, hit + needle.length]);
                    pos = hit + needle.length;
                }
            }
            ranges.sort((a, b) => a[0] - b[0] || b[1] - a[1]);
            let out = "";
            let pos = 0;
            for (const range of ranges) {
                if (range[1] <= pos) continue;
                const start = Math.max(pos, range[0]);
                if (start > pos) out += escapeHtml(source.slice(pos, start));
                out += "<strong>" + escapeHtml(source.slice(start, range[1])) + "</strong>";
                pos = range[1];
            }
            out += escapeHtml(source.slice(pos));
            return out;
        }

        function excerpt(text, terms) {
            let first = -1;
            let length = 0;
            const lower = text.toLowerCase();
            for (const term of terms) {
                const hit = lower.indexOf(term.toLowerCase());
                if (hit !== -1 && (first === -1 || hit < first)) {
                    first = hit;
                    length = term.length;
                }
            }
            if (first === -1) return "";
            const start = Math.max(0, first - 65);
            const end = Math.min(text.length, first + length + 90);
            return (start ? "…" : "") + highlightTerms(text.slice(start, end), terms) + (end < text.length ? "…" : "");
        }

        function childPaths() {
            const result = new Map();
            const prefix = currentPath ? currentPath + "/" : "";
            for (const item of visibleDefinitions()) {
                const rest = item.definedIn.slice(prefix.length);
                const slash = rest.indexOf("/");
                const name = slash === -1 ? rest : rest.slice(0, slash);
                if (!name) continue;
                const path = prefix + name;
                result.set(path, {name, path, file: slash === -1});
            }
            return [...result.values()].sort((a, b) => Number(a.file) - Number(b.file) || a.name.localeCompare(b.name));
        }

        function firstWord(value) {
            const text = String(value).trim();
            const space = text.indexOf(" ");
            const dash = text.indexOf("-");
            let end = text.length;
            if (space !== -1 && space < end) end = space;
            if (dash !== -1 && dash < end) end = dash;
            return text.slice(0, end).trim();
        }

        function enhanceOverloads() {
            for (const overload of content.querySelectorAll(".std-overload")) {
                const title = overload.querySelector("h3");
                if (!title) continue;

                const word = firstWord(title.textContent);
                if (word) {
                    const button = document.createElement("button");
                    button.type = "button";
                    button.className = "std-title-search";
                    button.textContent = "search " + word;
                    button.title = "Search visible definitions for " + word;
                    button.onclick = () => {
                        search.value = word;
                        renderSearch();
                        search.focus();
                    };
                    title.appendChild(button);
                }

                const source = overload.dataset.source || "";
                if (source) {
                    const sourceUrl = "https://github.com/maniospas/smoll/blob/main/" + source;
                    let importName = source;
                    if (importName.endsWith(".s")) importName = importName.slice(0, -2);
                    importName = importName.split("/").join(".");

                    const sourceButton = document.createElement("a");
                    sourceButton.className = "std-source-link";
                    sourceButton.href = sourceUrl;
                    sourceButton.target = "_blank";
                    sourceButton.rel = "noopener noreferrer";
                    sourceButton.textContent = "import " + importName;
                    title.appendChild(sourceButton);

                    for (const paragraph of overload.querySelectorAll("p")) {
                        if (!paragraph.textContent.trim().startsWith("Defined in:")) continue;
                        paragraph.remove();
                        break;
                    }
                }

                for (const pre of overload.querySelectorAll("pre")) {
                    const code = pre.querySelector("code");
                    const raw = code ? code.textContent : pre.textContent;
                    if (code && window.highlightSmoll) code.innerHTML = window.highlightSmoll(raw);
                    if (!raw.includes("import std.core") || pre.querySelector(".runbutton")) continue;
                    pre.style.position = "relative";
                    const button = document.createElement("a");
                    button.textContent = "▶ try it";
                    button.className = "runbutton";
                    button.style.cssText = "position:absolute;bottom:8px;right:8px;cursor:pointer;";
                    button.onclick = () => {
                        const current = pre.querySelector("code")?.innerText ?? pre.innerText;
                        let encoded = btoa(String.fromCharCode(...new TextEncoder().encode(current))).split("+").join("-").split("/").join("_");
                        while (encoded.endsWith("=")) encoded = encoded.slice(0, -1);
                        window.location.href = "playground.html?contents=" + encoded;
                    };
                    pre.appendChild(button);
                }
            }
        }

        function showDefinition(group) {
            if (!group || !group.length) return;
            // Within a selected definition name, show class overloads first too.
            const ordered = [...group].sort((a, b) => Number(b.isClass) - Number(a.isClass));
            let html = '<div class="std-definition-heading"><h1 class="std-definition-title">' + escapeHtml(ordered[0].name) + '</h1></div>';
            for (const item of ordered) html += '<section class="std-overload" data-source="' + escapeHtml(item.definedIn) + '">' + item.html + '</section>';
            content.innerHTML = html;
            enhanceOverloads();
        }

        function renderDirectory() {
            const groups = groupByName(visibleDefinitions());
            const names = [...groups.keys()].sort((a, b) => {
                const aClass = groups.get(a).some(item => item.isClass);
                const bClass = groups.get(b).some(item => item.isClass);
                if (aClass !== bClass) return aClass ? -1 : 1;
                return a.localeCompare(b);
            });

            pathLine.innerHTML = currentPath ? '<button class="std-up" type="button">←</button><span>' + escapeHtml(currentPath) + '</span>' : '<span>std/</span>';
            const up = pathLine.querySelector(".std-up");
            if (up) up.onclick = () => {
                const parts = currentPath.split("/");
                parts.pop();
                currentPath = parts.join("/");
                selectedName = "";
                search.value = "";
                renderDirectory();
            };

            nav.innerHTML = "";
            const tree = document.createElement("div");
            tree.className = "std-tree";
            for (const item of childPaths()) {
                const button = document.createElement("button");
                button.type = "button";
                button.className = "std-path";
                const name = document.createElement("span");
                name.className = "std-path-name";
                name.textContent = item.name;
                const kind = document.createElement("span");
                kind.className = "std-path-kind";
                kind.textContent = item.file ? "(file)" : "(dir)";
                button.appendChild(name);
                button.appendChild(kind);
                button.onclick = () => {
                    currentPath = item.path;
                    selectedName = "";
                    search.value = "";
                    renderDirectory();
                };
                tree.appendChild(button);
            }
            nav.appendChild(tree);

            const list = document.createElement("div");
            list.className = "std-definition-list";
            for (const name of names) {
                const button = document.createElement("button");
                button.type = "button";
                button.className = "std-definition-link" + (name === selectedName ? " selected" : "");
                const nameText = document.createElement("span");
                nameText.textContent = name;
                button.appendChild(nameText);
                if (groups.get(name).some(item => item.isClass)) {
                    const classLabel = document.createElement("span");
                    classLabel.className = "std-class-label";
                    classLabel.textContent = "(class)";
                    button.appendChild(classLabel);
                }
                button.onclick = () => {
                    selectedName = name;
                    showDefinition(groups.get(name));
                    renderDirectory();
                };
                list.appendChild(button);
            }
            nav.appendChild(list);

            if (!selectedName || !groups.has(selectedName)) selectedName = names[0] || "";
            if (selectedName) showDefinition(groups.get(selectedName));
            else content.innerHTML = '<div class="std-empty">No definitions here.</div>';
        }

        function renderSearch() {
            const query = search.value.trim();
            if (!query) {
                renderDirectory();
                return;
            }

            const parsed = parseSearch(query);
            if (parsed.error) {
                nav.innerHTML = '<div class="std-search-error">' + parsed.error + '</div>';
                content.innerHTML = '<div class="std-empty">Fix the search query to continue.</div>';
                return;
            }

            const terms = parsed.terms;
            if (!terms.length) {
                renderDirectory();
                return;
            }
            const lowered = terms.map(term => term.toLowerCase());
            const matches = visibleDefinitions().filter(item => {
                const haystack = (item.name + " " + item.text).toLowerCase();
                return lowered.every(term => haystack.includes(term));
            });
            const groups = groupByName(matches);
            const names = [...groups.keys()].sort((a, b) => {
                const aClass = groups.get(a).some(item => item.isClass);
                const bClass = groups.get(b).some(item => item.isClass);
                if (aClass !== bClass) return aClass ? -1 : 1;
                return a.localeCompare(b);
            });
            nav.innerHTML = '<div class="std-search-count">' + matches.length + ' matching overload' + (matches.length === 1 ? '' : 's') + '</div>';

            for (const name of names) {
                const group = groups.get(name);
                const hit = group.find(item => {
                    const haystack = (item.name + " " + item.text).toLowerCase();
                    return lowered.every(term => haystack.includes(term));
                }) || group[0];
                const button = document.createElement("button");
                button.type = "button";
                button.className = "std-search-result";
                const snippet = excerpt(hit.text, terms) || 'Matched in definition name';
                const isClass = group.some(item => item.isClass);
                button.innerHTML = '<span class="std-result-name">' + highlightTerms(name, terms) + (isClass ? '<span class="std-class-label">(class)</span>' : '') + '</span><span class="std-result-source">' + escapeHtml(hit.definedIn) + '</span><span class="std-result-excerpt">' + snippet + '</span>';
                button.onclick = () => showDefinition(group);
                nav.appendChild(button);
            }

            if (!names.length) content.innerHTML = '<div class="std-empty">No matches.</div>';
        }

        search.addEventListener("input", renderSearch);
        renderDirectory();
    });
    </script>
    """

    html = """
    <!DOCTYPE html>
    <html lang="en">
    <head>
        <meta charset="UTF-8">
        <title>smoλ</title>
        <link rel="stylesheet" href="index.css">
        <style>
        body {
            max-width:800px;
            margin:40px auto;
            padding:0 10px;
            font:18px/1.5 -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, "Helvetica Neue", Arial, "Noto Sans", sans-serif, "Apple Color Emoji", "Segoe UI Emoji", "Segoe UI Symbol", "Noto Color Emoji";
            color:#444;
        }
        h1:first-child {font-size:4rem}
        h2,
        h3 {
        line-height:1.2
        }
        h1 {margin-top:60px}
        a {
            color:#888;
            text-decoration: none;
        }
        a:hover {
            color:#58a6ff
        }
        .topbar {
            position: fixed;
            top: 0;
            left: 0;
            right: 0;
            height: 48px;
            background: #fff;
            border-bottom: 1px solid #ddd;
            display: flex;
            align-items: center;
            padding: 0 24px;
            gap: 28px;
            z-index: 2000;
            font-size: 0.9rem;
            justify-content: center;
        }
        .topbar > a, .topbar > .dropdown > a {
            text-decoration: none;
            font-weight: 500;
            color: #444;
        }
        .topbar > a:hover, .topbar > .dropdown > a:hover { color: #58a6ff; }
        .dropdown {
            position: relative;
            display: flex;
            align-items: center;
            height: 100%;
        }
        .dropdown > a::after {
            content: " ▾";
            font-size: 0.75em;
            opacity: 0.6;
        }
        .dropdown-menu {
            display: none;
            position: absolute;
            top: 100%;
            left: 50%;
            transform: translateX(-50%);
            background: #fff;
            border: 1px solid #ddd;
            border-radius: 8px;
            padding: 6px 0;
            min-width: 180px;
            box-shadow: 0 4px 12px rgba(0,0,0,0.1);
            z-index: 3000;
        }
        .dropdown:hover .dropdown-menu { display: block; }
        .dropdown-menu a {
            display: block;
            padding: 7px 18px;
            font-weight: 400;
            white-space: nowrap;
            color: #444;
        }
        .dropdown-menu a:hover { color: #58a6ff; background: #f5f5f5; }
        .dropdown-menu hr {
            border: none;
            border-top: 1px solid #eee;
            margin: 4px 0;
        }
        .toc {
            position:fixed;
            padding-top:50px;
            left:0;
            top:0;
            padding-left:20px;
            width:200px;
            overflow-y:auto;
            font-size:0.9rem;
            z-index:1000;
            height: 100vh;
        }
        .toc i {color: #888}
        .std-definition-link {
            display: flex;
            align-items: center;
            width: 100%;
        }
        .std-class-label {
            margin-left: auto;
            font-size: 0.75em;
            color: #888;
        }
        .std-files {
            margin-top: 80px;
            margin-bottom: 40px;
        }
        .std-files select {
            font: inherit;
            color: #444;
            background: #fff;
            border: 1px solid #aaa;
            border-radius: 5px;
            padding: 6px 10px;
            max-width: 100%;
        }
        .std-file.selected {
            color: #444;
            font-weight: 700;
        }
        pre {
            color: #2f2f2f;
        }
        @media (prefers-color-scheme: dark) {
            a {
                color:#aaa;
            }
            body {
                color:#eeeeee;
                background:#1f1f1f;
            }
            .topbar {
                color:#eeeeee;
                background:#1f1f1f;
                border-bottom: 1px solid #444;
            }
            .topbar > a, .topbar > .dropdown > a {color:#dddddd;}
            .toc {
                color:#eeeeee;
                background:#1f1f1f;
            }
            .std-file.selected {
                color:#eeeeee;
            }
            .dropdown-menu {
                background: #1f1f1f;
                border-color: #444;
            }
            .dropdown-menu a { color: #ddd; }
            .dropdown-menu a:hover { background: #2f2f2f; color: #58a6ff; }
            .dropdown-menu hr { border-color: #444; }

            .std-files select {
                color: #eeeeee;
                background: #1f1f1f;
                border-color: #444;
            }
        }
        @media (max-width: 1380px) {
            body {margin:10px;}
            .toc {
                background:white!important;
                position:static;
                width:90%;
                margin: 0;
                border:0;
            }
        }
        .console {
            background: #1F1F1F; color:#EEEEEE;padding:0px 10px;font-size:0.8rem;border-radius: 8px;border:1px solid #444
        }
        .output {
            white-space: pre-wrap;
        }
        html {
            scroll-behavior: smooth;
        }
        .notice-box {
            border-left: 4px solid;
            border-radius: 4px;
            padding: 12px 16px;
            margin: 16px 0;
            font-style: normal;
        }
        .box-warning {
            border-color: #c0392b;
            background: #fff0f0;
            color: #7a1a1a;
        }
        .box-info {
            border-color: #388bfd;
            background: #e6f0ff;
            color: #0a3069;
        }
        .button {
            text-decoration: none;
            font-weight: 500;
            padding: 1rem;
            padding-right: 1.5rem;
            margin-right: 0.5rem;
            border: 1px solid #aaa;
            border-radius: 15px;
            width: 200px!important;
            font-size: 1.4rem;
        }
        .button:hover {
            background: #fafae3;
        }
        .runbutton {
            text-decoration: none;
            font-weight: 500;
            padding: 0.5rem 1rem;
            border: 1px solid #444;
            border-radius: 5px;
        }
        .runbutton:hover {
            background: #fafafa;
            color: #58a6ff;
        }
        .step {border: 1px solid #444; padding-left:20px; border-radius: 15px;background: #fafafa;margin-bottom:2rem;}
        .button {background: white;color:#58a6ff}
        @media (prefers-color-scheme: dark) {
            .box-warning {
                background: #272115;
                color: #e3b341;
            }
            .box-info {
                background: #0d1f3c;
                color: #79c0ff;
            }
            .step {background: #2f2f2f;border: 1px solid #444;}
            .button {background: #fafae3;color:black}
        }
        </style>
    </head>"""+f"""
    <body class=""" + ("std-page" if "std" in target else "") + """>
        <nav class="topbar">
            <a href="index.html" style="position:absolute;left:20px;font-weight:{'900' if 'index' in target else '500'}">Smoλ</a>
            <a href="install.html" style="font-weight:{'900' if 'install' in target else '500'}">Install</a>
            <div class="dropdown">
                <a href="#" style="font-weight:{'900' if any(t in target for t in ['tutorial_cli', 'tutorial_web', 'tutorial_game', 'tutorial_data', 'tutorial_graph', 'tutorial_lambda']) else '500'}">Tutorials</a>
                <div class="dropdown-menu">
                    <a href="tutorial_cli.html" style="font-weight:{'900' if 'tutorial_cli' in target else '400'}">Command line app</a>
                    <a href="tutorial_web.html" style="font-weight:{'900' if 'tutorial_web' in target else '400'}">Web server</a>
                    <a href="tutorial_game.html" style="font-weight:{'900' if 'tutorial_game' in target else '400'}">Game dev</a>
                    <a href="tutorial_data.html" style="font-weight:{'900' if 'tutorial_data' in target else '400'}">Data analysis</a>
                    <a href="tutorial_graph.html" style="font-weight:{'900' if 'tutorial_graph' in target else '400'}">Graph mining</a>
                    <a href="tutorial_lambda.html" style="font-weight:{'900' if 'tutorial_lambda' in target else '400'}">Lambda calculus</a>
                </div>
            </div>
            <div class="dropdown">
                <a href="#" style="font-weight:{'900' if 'reference' in target or 'std' in target or 'learn' in target else '500'}">Documentation</a>
                <div class="dropdown-menu">
                    <a href="learn.html" style="font-weight:{'900' if 'learn' in target else '400'}">Learn</a>
                    <a href="reference.html" style="font-weight:{'900' if 'reference' in target else '400'}">Reference guide</a>
                    <a href="std.html" style="font-weight:{'900' if 'std' in target else '400'}">Standard library</a>
                </div>
            </div>
            <a href="playground.html" style="font-weight:{'900' if 'playground' in target else '500'}">Playground</a>
            <a href="https://github.com/maniospas/smoll">GitHub</a>
        </nav>
    """ + html + run_button_script + std_filter_script + smoll_highlight_script + """
    </body>
    </html>
    """

    with open(target, "w") as file:
        file.write(html)
    print("created: "+target)

export("docs/index.md", "docs/index.html")
export("docs/install.md", "docs/install.html")
export("docs/learn.md", "docs/learn.html")
export("docs/reference.md", "docs/reference.html")
export("docs/playground.md", "docs/playground.html")
export("docs/std.md", "docs/std.html")
export("docs/tutorial_cli.md", "docs/tutorial_cli.html")
export("docs/tutorial_web.md", "docs/tutorial_web.html")
export("docs/tutorial_graph.md", "docs/tutorial_graph.html")
export("docs/tutorial_game.md", "docs/tutorial_game.html")
export("docs/tutorial_data.md", "docs/tutorial_data.html")
export("docs/tutorial_lambda.md", "docs/tutorial_lambda.html")
