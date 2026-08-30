local import std.graphics
local import std.core
local import std.sci.vec

def area(effect edit window WINDOW, position pos, size size)
    return class compiler::args()

def area(effect edit window WINDOW)
    return area(80.0, 30.0, WINDOW.size.width-120.0, WINDOW.size.height-70.0)

def plot_config("line"|"scatter" method, color|blank _line_color)
    if _line_color is blank
        line_color = mut color(255, 255, 255)
    else
        line_color = mut _line_color
    return class(
        method, 
        line_color, 
        assigned line_thickness = mut 2.0,
        assigned axes_thickness = mut 3.0, 
        assigned axes_color = mut color(128,128,128), 
        assigned grid_color = mut color(220, 220, 220), 
        assigned point_radius = mut 5.0,
        assigned grid_tics = mut 10,
        assigned title_x = mut "",
        assigned title_y = mut ""
    )

def plot(effect area AREA, vec x, vec y, plot_config config)
    WINDOW = edit AREA.WINDOW
    if len(x)!= len y
        fail "plot vectors must have the same length"
    if len(x) < 2
        return ()
    xmin = min x
    xmax = max x
    ymin = min y
    ymax = max y

    dx = mut xmax - xmin
    dy = mut ymax - ymin
    if dx == 0.0 dx = 1.0
    if dy == 0.0 dy = 1.0

    # axes

    if xmin <= 0.0 and xmax >= 0.0 axis_x = AREA.pos.x + (((0.0-xmin)/dx)*AREA.size.width)
    else if xmin > 0.0 axis_x = AREA.pos.x
    else axis_x = AREA.pos.x + AREA.size.width

    if ymin <= 0.0 and ymax >= 0.0 axis_y = AREA.pos.y + AREA.size.height - (((0.0-ymin)/dy)*AREA.size.height)
    else if ymin > 0.0 axis_y = AREA.pos.y + AREA.size.height
    else axis_y = AREA.pos.y

    line(axis_x, AREA.pos.y, axis_x, AREA.pos.y + AREA.size.height, config.axes_thickness, config.axes_color)
    line(AREA.pos.x, axis_y, AREA.pos.x + AREA.size.width, axis_y, config.axes_thickness*2.0, config.axes_color)

    # tics and grid
    CHARS = edit circular alloc 128
    tic_size = config.point_radius
    tic_text_size = 14.0
    tics = config.grid_tics
    if tics!=0 for j in range(0, tics+1)
        t = float(j)/float(tics)
        px = AREA.pos.x + t*AREA.size.width
        py = AREA.pos.y + t*AREA.size.height
        xnumber = xmin + t*dx
        ynumber = ymax - t*dy
        line(px, AREA.pos.y, px, AREA.pos.y + AREA.size.height, 1.0, config.grid_color)
        line(AREA.pos.x, py, AREA.pos.x + AREA.size.width, py, 1.0, config.grid_color)
        line(px, axis_y-tic_size, px, axis_y+tic_size, 1.0, config.axes_color)
        line(axis_x-tic_size, py, axis_x+tic_size, py, 1.0, config.axes_color)
        text(WINDOW, copy(xnumber), position(px, axis_y+tic_size+2.0), tic_text_size, config.axes_color)
        y_text = copy(ynumber)
        text(WINDOW, y_text, position(axis_x+tic_size+2.0-(0.8*tic_text_size*float len y_text), py), tic_text_size, config.axes_color)

    if method is "line"
        for i in range(1, len x)
            try x1 = AREA.pos.x + (((x[i-1]-xmin)/dx)*AREA.size.width)
            try y1 = AREA.pos.y + AREA.size.height - (((y[i-1] - ymin)/dy)*AREA.size.height)
            try x2 = AREA.pos.x + (((x[i] - xmin)/dx)*AREA.size.width)
            try y2 = AREA.pos.y + AREA.size.height - (((y[i] - ymin)/dy)*AREA.size.height)
            line(x1, y1, x2, y2, config.thickness, config.line_color)
    
    for i in range of len x
        try x2 = AREA.pos.x + (((x[i] - xmin)/dx)*AREA.size.width)
        try y2 = AREA.pos.y + AREA.size.height - (((y[i] - ymin)/dy)*AREA.size.height)
        circ(x2, y2, 5.0 line nat config.line_thickness, config.line_color)
