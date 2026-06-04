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
        }
        .toc i {color: #888}
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
            .dropdown-menu {
                background: #1f1f1f;
                border-color: #444;
            }
            .dropdown-menu a { color: #ddd; }
            .dropdown-menu a:hover { background: #2f2f2f; color: #58a6ff; }
            .dropdown-menu hr { border-color: #444; }
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
    <body>
        <nav class="topbar">
            <a href="index.html" style="position:absolute;left:20px;font-weight:{'900' if 'index' in target else '500'}">Smoλ</a>
            <a href="install.html" style="font-weight:{'900' if 'install' in target else '500'}">Install</a>
            <div class="dropdown">
                <a href="#" style="font-weight:{'900' if any(t in target for t in ['tutorial_cli', 'tutorial_web', 'tutorial_game', 'tutorial_data', 'tutorial_graph']) else '500'}">Tutorials</a>
                <div class="dropdown-menu">
                    <a href="tutorial_cli.html" style="font-weight:{'900' if 'tutorial_cli' in target else '400'}">Command line app</a>
                    <a href="tutorial_web.html" style="font-weight:{'900' if 'tutorial_web' in target else '400'}">Web server</a>
                    <a href="tutorial_game.html" style="font-weight:{'900' if 'tutorial_game' in target else '400'}">Game dev</a>
                    <a href="tutorial_data.html" style="font-weight:{'900' if 'tutorial_data' in target else '400'}">Data analysis</a>
                    <a href="tutorial_graph.html" style="font-weight:{'900' if 'tutorial_graph' in target else '400'}">Graph mining</a>
                </div>
            </div>
            <div class="dropdown">
                <a href="#" style="font-weight:{'900' if 'reference' in target or 'std' in target else '500'}">Documentation</a>
                <div class="dropdown-menu">
                    <a href="reference.html" style="font-weight:{'900' if 'reference' in target else '400'}">Learn</a>
                    <a href="std.html" style="font-weight:{'900' if 'std' in target else '400'}">Standard library</a>
                </div>
            </div>
            <a href="playground.html" style="font-weight:{'900' if 'playground' in target else '500'}">Playground</a>
            <a href="https://github.com/maniospas/smoll">GitHub</a>
        </nav>
    """ + html + run_button_script + """
    </body>
    </html>
    """

    with open(target, "w") as file:
        file.write(html)
    print("created: "+target)

export("docs/index.md", "docs/index.html")
export("docs/install.md", "docs/install.html")
export("docs/tutorial.md", "docs/tutorial.html")
export("docs/reference.md", "docs/reference.html")
export("docs/playground.md", "docs/playground.html")
export("docs/std.md", "docs/std.html")
export("docs/tutorial_cli.md", "docs/tutorial_cli.html")
export("docs/tutorial_web.md", "docs/tutorial_web.html")
export("docs/tutorial_graph.md", "docs/tutorial_graph.html")
export("docs/tutorial_game.md", "docs/tutorial_game.html")
export("docs/tutorial_data.md", "docs/tutorial_data.html")
