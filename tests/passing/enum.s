import "std/core.s"

def enum = "A"|"B"|"C"

# bad practice to create all combinations of enums
def Answers(enum first, enum second, nat minutes_to_answer)
def answers(cstr first, cstr second, nat minutes_to_answer)

def main()
    answers = answers("A", "A", 60)
    if not answers is Answers 
        fail "not a valid answer" # this will fail
    print "answered: "
    print answers.first
    print answers.second
    print ("in", " ")
    print (answers.minutes_to_answer, " minutes\n")
