import markdown2
import re

with open("docs/reference.md") as file:
    text = file.read()

html = markdown2.markdown(text, extras=['fenced-code-blocks', 'header-ids', 'smarty-pants', 'markdown-in-html', 'highlightpython-lang', 'cuddled-lists'])

def convert_notice_boxes(html):
    """Convert <p><em>Warning: ...</em></p> and <p><em>Info: ...</em></p> to styled boxes."""
    def replacer(match):
        tag_type = match.group(1).lower()  # 'warning' or 'info'
        content = match.group(2).strip()
        css_class = 'box-warning' if tag_type == 'warning' else 'box-info'
        label = tag_type.capitalize()
        return f'<div class="notice-box {css_class}"><strong>{label}:</strong> {content}</div>'

    # Match <p><em>Warning: ...</em></p> or <p><em>Info: ...</em></p>
    pattern = re.compile(
        r'<p><em>(Warning|Info):\s*(.*?)</em></p>',
        re.IGNORECASE | re.DOTALL
    )
    return pattern.sub(replacer, html)

html = convert_notice_boxes(html)

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
        color:#8e96f0
    }
    .toc {
        position:fixed;
        left:0;
        top:0;
        padding-left:20px;
        width:200px;
        border-right: 1px solid #444;height:100%;
        background:#fafae3!important;
        overflow-y:auto;
        font-size:0.9rem;
        z-index:1000;
    }
    @media (max-width: 1380px) {
        .toc {
            position:static;
            width:100%;
            max-width:800px;
        }
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
        border-color: #d29922;
        background: #fff8e6;
        color: #6e4f00;
    }
    .box-info {
        border-color: #388bfd;
        background: #e6f0ff;
        color: #0a3069;
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
</head>
<body>""" + html + """
</body>
</html>
"""

with open("docs/index.html", "w") as file:
    file.write(html)