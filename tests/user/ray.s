import "std/core.s"
import "std/sci.s" as sci
import "std/ray.s" as ray

def Circle(float _cx, float _cy, float _vx, float _vy, float _radius)
    cx = mut _cx
    cy = mut _cy
    vx = mut _vx
    vy = mut _vy
    radius = mut _radius
    return (cx,cy,vx,vy,radius)

def process(mut Circle ptr _self, float dt)
    self = _self.. # unpack
    self.cx = self.cx + self.vx * dt
    self.cy = self.cy + self.vy * dt
    if self.cx - self.radius < 0.0
        self.cx = self.radius
        self.vx = sci:abs self.vx
    if self.cx + self.radius > 800.0
        self.cx = 800.0 - self.radius
        self.vx = 0.0-(sci:abs self.vx)
    if self.cy - self.radius < 0.0
        self.cy = self.radius
        self.vy = sci:abs self.vy
    if self.cy + self.radius > 600.0
        self.cy = 600.0 - self.radius
        self.vy = 0.0-(sci:abs self.vy)
    _self << self

def draw(Circle self, edit ray:Window win)
    white  = ray:Color(255, 255, 255)
    teal   = ray:Color(0,   200, 180)
    shadow = ray:Color(0,   200, 180, 60)
    pos = (self.cx, self.cy)
    win
    .ray:circ(self.cx + 4.0, self.cy + 4.0, self.radius, shadow)
    .ray:circ(pos, self.radius, teal)
    .ray:circ_line(pos, nat self.radius, 2, white)

def main()
    win = ray:Size(800.0, 600.0).ray:Window "Moving Circle"

    N = 1000
    circles = Circle[].alloc N
    for create_circle&& in circles
        i = float compiler:for_counter() # builtin way of enumerating
        create_circle << Circle(400.0, 300.0, 200.0-i, 160.0+i, 30.0)

    while ray:is_open win
        dt = ray:dt()
        for proc_circle&& in circles # mutable pointer
            proc_circle.process dt
        frame = ray:draw win
        win.ray:clear ray:Color(20, 20, 60)
        for draw_circle in circles
            draw_circle.draw win
        del frame
