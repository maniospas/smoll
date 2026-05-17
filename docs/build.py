import markdown2
import re

def export(path, target):
    with open(path) as file:
        text = file.read()
    text = text.replace("[Index](https://maniospas.github.io/smoll/index.html)", "[GitHub](https://github.com/maniospas/smoll)")
    text = text.replace("https://maniospas.github.io/smoll/", "")

    html = markdown2.markdown(text, extras=['fenced-code-blocks', 'header-ids', 'smarty-pants', 'markdown-in-html', 'highlightpython-lang', 'cuddled-lists'])

    def convert_notice_boxes(html):
        def replacer(match):
            tag_type = match.group(1).lower()
            content = match.group(2).strip()
            css_class = 'box-warning' if tag_type == 'warning' else 'box-info'
            label = tag_type.capitalize()
            return f'<div class="notice-box {css_class}"><strong>{label}:</strong> {content}</div>'
        pattern = re.compile(
            r'<p><em>(Warning|Info):\s*(.*?)</em></p>',
            re.IGNORECASE | re.DOTALL
        )
        return pattern.sub(replacer, html)

    html = convert_notice_boxes(html)

    run_button_script = "" if "playground" in target else """
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
                const encoded = btoa(unescape(encodeURIComponent(code)));
                window.location.href = "playground.html?contents=" + encoded;
            });
            pre.appendChild(btn);
        });
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
        @media (prefers-color-scheme: dark) {
            body {
                color:#c9d1d9;
                background:#0d1117
            }
        }
        a:link {
            color:#58a6ff
        }
        a:visited {
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
        .topbar a {
            text-decoration: none;
            font-weight: 500;
            color: #444;
        }
        .topbar a:hover { color: #58a6ff; }
        .toc {
            position:fixed;
            padding-top:50px;
            left:0;
            top:0;
            padding-left:20px;
            width:200px;
            border-right: 1px solid #444;height:100%;
            background:#fafafa!important;
            overflow-y:auto;
            font-size:0.9rem;
            z-index:1000;
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
            border: 1px solid #444;
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
        @media (prefers-color-scheme: dark) {
            .box-warning {
                background: #272115;
                color: #e3b341;
            }
            .box-info {
                background: #0d1f3c;
                color: #79c0ff;
            }
        }
        </style>
    </head>"""+f"""
    <body>
        <nav class="topbar">
            <a href="index.html" style="position:absolute;left:20px;font-weight:{'900' if 'index' in target else '500'}">Smoλ</a>
            <a href="install.html" style="font-weight:{'900' if 'install' in target else '500'}">Install</a>
            <a href="reference.html" style="font-weight:{'900' if 'reference' in target else '500'}">Learn</a>
            <a href="playground.html" style="font-weight:{'900' if 'playground' in target else '500'}">Playground</a>
            <a href="https://github.com/maniospas/smoll">GitHub</a>
        </nav>
    """ + html + run_button_script + """
    </body>
    </html>
    """

    # repl = """const resp = await fetch('https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/smoll.py');if (!resp.ok) throw new Error('HTTP ' + resp.status);const raw = await resp.text();"""
    # if repl in html:
    #     with open("smoll.py") as src: src = src.read()
    #     html = html.replace(repl, "const raw = `"+src.replace("\\","\\\\").replace("`", "\`").replace("{", "\{")+"`;")

    with open(target, "w") as file:
        file.write(html)
    print("created: "+target)

export("docs/index.md", "docs/index.html")
export("docs/install.md", "docs/install.html")
export("docs/tutorial.md", "docs/tutorial.html")
export("docs/reference.md", "docs/reference.html")
export("docs/playground.md", "docs/playground.html")