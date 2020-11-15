#include "myMath.h"

double Power(double x, int y){
    if (x==0){
        return 0;
    }
    if (y==1){
        return x;
    }
    if (y>1){
        return( x* Power(x,(y-1)));
    }
    if(y<0){
        return ((1/(Power(x,((-1)*(y))))));
    }
    return  1;
}


double Exponent(int x)
{
    return (Power(2.71828,x));
}

