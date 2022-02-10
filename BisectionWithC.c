/*Bisection with C*/

#include<stdio.h>
#include<math.h>
#define EPSILON 0.001

float func (float x)
{
    return (x*x*x - x*x +2);
}
void bisection (float a, float b){
    if(func(a) * func(b) >= 0){
        printf(" Wrong assumption of a and b.\n");
        return;
    }
    double c=a;;
    while(b-a >= EPSILON ){
        c = (a+b)/2;
        if(func(c) ==0){
            break;
        }
        if(func(a)* func(c) < 0 ){

            b = c;
        }
        else
            a=c;
    }
    printf("The value of Root is : %f",c );
}
int main ()
{
    int a= -500,b=500;
    bisection(a,b);
    return 0;
}
