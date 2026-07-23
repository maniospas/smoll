import "std/core.s"
import "std/sci.s" as sci
import "std/graphics.s"

def circle(float _cx, float _cy, float _vx, float _vy, float _radius)
    cx = mut _cx
    cy = mut _cy
    vx = mut _vx
    vy = mut _vy
    radius = mut _radius
    return (cx,cy,vx,vy,radius)

def process(mut circle ptr _self, float dt)
    self = mut compiler::deref _self # unpack
    self.cx = self.cx + self.vx * dt
    self.cy = self.cy + self.vy * dt
    if self.cx - self.radius < 0.0
        self.cx = self.radius
        self.vx = sci::abs self.vx
    if self.cx + self.radius > 800.0
        self.cx = 800.0 - self.radius
        self.vx = 0.0-(sci::abs self.vx)
    if self.cy - self.radius < 0.0
        self.cy = self.radius
        self.vy = sci::abs self.vy
    if self.cy + self.radius > 600.0
        self.cy = 600.0 - self.radius
        self.vy = 0.0-(sci::abs self.vy)
    _self = self

def draw(effect edit window WINDOW, circle self)
    white  = color(255, 255, 255)
    teal   = color(0,   200, 180)
    shadow = color(0,   200, 180, 60)
    pos = (self.cx, self.cy)
    circ(self.cx + 4.0, self.cy + 4.0, self.radius, shadow)
    circ(pos, self.radius, teal)
    circ_line(pos, nat self.radius, 2, white)

def main()
    WINDOW = edit window(800.0, 600.0, "Moving circle", "std/ArianaVioleta-dz2K.ttf")

    N = 10
    circles = edit circle[].alloc N
    for create_circle& in circles
        i = float compiler::for_counter() # builtin way of enumerating
        create_circle = circle(400.0, 300.0, 200.0-i, 160.0+i, 30.0)

    while is_open()
        dt = dt()*3.0
        for proc_circle& in circles # mutable pointer
            proc_circle.process dt
        frame = draw()
        clear color(20, 20, 60)
        for draw_circle in circles
            draw_circle.draw()
        text("demo", 10.0, 10.0, 64.0, color(255,255,255))
        del frame
