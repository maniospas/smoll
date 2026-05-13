import markdown2
from pygments.formatters import HtmlFormatter
from markdown.extensions.codehilite import CodeHiliteExtension

with open("docs/reference.md") as file:
    text = file.read()
html = markdown2.markdown(text, extras=['fenced-code-blocks', 'header-ids', 'smarty-pants', 'markdown-in-html', 'highlightpython-lang', 'cuddled-lists'])
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
        background:#ffffc0!important;
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

    </style>
</head>
<body>"""+html+"""
</body>
</html>
"""
with open("docs/index.html", "w") as file:
    file.write(html)