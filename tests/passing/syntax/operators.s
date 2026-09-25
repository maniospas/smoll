import std.core
import std.test

def main(CLI)
    # same-precedence associativity
    assert(5-2-1==2, "sub sub")
    assert(10-3-2==5, "sub sub 2")
    assert(8/4/2==1, "div div")
    assert(12/3*2==8, "div mul")
    assert(6*2/3==4, "mul div")
    assert(7%4%2==1, "mod mod")
    assert(7%4*2==6, "mod mul")
    assert(8/4%3==2, "div mod")

    # add/sub
    assert(5-2+1==4, "sub add")
    assert(1+5-2==4, "add sub")
    assert(3+2-2-1==2, "add sub sub")
    assert(10-2+3-4==7, "sub add sub")
    assert(1+2+3-4==2, "add add sub")
    assert(3+2-2+1==4, "add sub add")

    # multiplication before addition
    assert(1+2*3==7, "add mul")
    assert(2*3+1==7, "mul add")
    assert(10-2*3==4, "sub mul")
    assert(2*3-1==5, "mul sub")
    assert(1+2*3+4==11, "add mul add")
    assert(10-2*3+1==5, "sub mul add")
    assert(2+3*4-5==9, "add mul sub")

    # division before addition/subtraction
    assert(1+6/3==3, "add div")
    assert(6/3+1==3, "div add")
    assert(5-6/3==3, "sub div")
    assert(6/3-1==1, "div sub")
    assert(2+12/3-1==5, "add div sub")

    # modulo before addition/subtraction
    assert(1+7%4==4, "add mod")
    assert(7%4+1==4, "mod add")
    assert(5-7%4==2, "sub mod")
    assert(7%4-1==2, "mod sub")

    # parentheses override precedence
    assert((1+2)*3==9, "paren add mul")
    assert(2*(3+1)==8, "mul paren add")
    assert((5-2)*3==9, "paren sub mul")
    assert(12/(2*3)==2, "div paren mul")
    assert((12/2)*3==18, "paren div mul")
    assert(10-(2+3)==5, "sub paren add")
    assert((10-2)+3==11, "paren sub add")

    # arithmetic before comparisons
    assert(5-2>1, "sub gt")
    assert(5-2<5, "sub lt")
    assert(5>5-2, "gt sub")
    assert(1<5-2, "lt sub")

    assert(1+2==3, "add eq")
    assert(3==1+2, "eq add")
    assert(5-2==3, "sub eq")
    assert(3==5-2, "eq sub")

    assert(2*3==6, "mul eq")
    assert(6==2*3, "eq mul")
    assert(6/3==2, "div eq")
    assert(2==6/3, "eq div")

    assert(1+2<4, "add lt")
    assert(4>1+2, "gt add")
    assert(5-2<=3, "sub le")
    assert(3>=5-2, "ge sub")
    assert(2*3>5, "mul gt")
    assert(5<2*3, "lt mul")
    assert(6/3<3, "div lt")
    assert(3>6/3, "gt div")

    # longer arithmetic/comparison combinations
    assert(1+2*3==7, "add mul eq")
    assert(7==1+2*3, "eq add mul")
    assert(10-2*3>3, "sub mul gt")
    assert(3<10-2*3, "lt sub mul")
    assert(2+3*4==14, "add mul eq 2")
    assert(14==2+3*4, "eq add mul 2")
    assert(20/2+3==13, "div add eq")
    assert(13==20/2+3, "eq div add")

    # != with arithmetic
    assert(1+2!=4, "add neq")
    assert(4!=1+2, "neq add")
    assert(2*3!=5, "mul neq")
    assert(5!=2*3, "neq mul")

    # mixed */% chains
    assert(24/3*2==16, "div mul chain")
    assert(24/3/2==4, "div div chain")
    assert(24/3%5==3, "div mod chain")
    assert(5*3%4==3, "mul mod chain")
    assert(20%6*2==4, "mod mul chain")

    # combinations that catch accidental precedence reversal
    assert(2+8/4==4, "add div precedence")
    assert(8/4+2==4, "div add precedence")
    assert(10-2*4==2, "sub mul precedence")
    assert(10-8/4==8, "sub div precedence")
    assert(2*4+3*2==14, "two mul groups")
    assert(12/3+8/4==6, "two div groups")
    assert(2+3*4+5*2==24, "multiple precedence groups")

    # explicit grouping should produce different results
    assert((2+3)*4==20, "group add before mul")
    assert(2+(3*4)==14, "group mul")
    assert((10-2)*3==24, "group sub before mul")
    assert(10-(2*3)==4, "group mul before sub")
    assert((8/4)*2==4, "group div then mul")
    assert(8/(4*2)==1, "group mul then div")