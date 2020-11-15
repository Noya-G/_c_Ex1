#include <stdio.h>
#include "myMath.h"

int main()

{
    double x = 0 ;
    
    printf("Enter a number :\n");
    
   scanf("%lf",&x);
    
    /*calculate the limit of functio: .*/
    
    /*  f1: */
    double f11= Exponent(x); //e^x
    double f12 = Power(x,3); //x^3
    double f1=sub(add(f11,f12),2); // f(x)=e^x + x^3 -2
    
        
     /* f2: */
    double f21= power (x,2);//x^2
    double f2=add(mul(3,x),mul(2,f21)); // f(x)=3x+2x^2
    
     /* f3:  */
    double f31=Power(x,3); //x^3
    double f3=sub(div(mul(4,f31),5),mul(2,x)); // f(x)=(4x^3)/5 -2x
    
    
   f1*=10000;
   f2*=10000;
   f3*=10000;
    
    printf("the value of f(x)=e^x + x^3 -2 at the point %lf is: %10.4lf\n",x,((int)f1)/10000.0);
    printf("the value of f(x)=3x+2x^2 at the point %lf is: %10.4lf\n",x,((int)f2)/10000.0);
    printf("the value of f(x)=(4x^3)/5 -2x at the point %lf is: %10.4lf\n",x,((int)f3)/10000.0);
    printf("The Program is done!\n");
    return 0;
}
