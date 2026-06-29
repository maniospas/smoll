import "std/core.s"
import "std/sci.s" as sci
import "std/graphics.s" as graphics

def Circle(float _cx, float _cy, float _vx, float _vy, float _radius)
    cx = mut _cx
    cy = mut _cy
    vx = mut _vx
    vy = mut _vy
    radius = mut _radius
    return (cx,cy,vx,vy,radius)

def process(mut Circle ptr _self, float dt)
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

def draw(Circle self, edit graphics::Window win)
    white  = graphics::Color(255, 255, 255)
    teal   = graphics::Color(0,   200, 180)
    shadow = graphics::Color(0,   200, 180, 60)
    pos = (self.cx, self.cy)
    win
    .graphics::circ(self.cx + 4.0, self.cy + 4.0, self.radius, shadow)
    .graphics::circ(pos, self.radius, teal)
    .graphics::circ_line(pos, nat self.radius, 2, white)

def main()
    win = edit graphics::Size(800.0, 600.0).graphics::Window "Moving Circle"

    N = 1000
    circles = edit Circle[].alloc N
    for create_circle&& in circles
        i = float compiler::for_counter() # builtin way of enumerating
        create_circle = Circle(400.0, 300.0, 200.0-i, 160.0+i, 30.0)

    while graphics::is_open win
        dt = graphics::dt()
        for proc_circle&& in circles # mutable pointer
            proc_circle.process dt
        frame = graphics::draw win
        win.graphics::clear graphics::Color(20, 20, 60)
        for draw_circle in circles
            draw_circle.draw win
        del frame
