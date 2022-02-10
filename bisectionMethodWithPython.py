EPSILON = 0.001

def function(x):
    return x*x*x - x - 1


def bisection (a,b):
    if(function(a)* function(b) >=0):
        print("Enter the correct value of a and b")
        return

    c = a
    
    while ((b-a) >= EPSILON):
        c= (a+b)/2

        if(function(c)==0):
            break
        
        if(function(a)* function(c) > 0):
            a = c
        else:
            b = c

    print("Root value: ", c)


bisection(-2,5)
