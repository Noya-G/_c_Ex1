#ifndef __MYMATH__H
#define __MYMATH__H
#define EULER 2.718281
float add (float x , float y); /*Function that calculates and returns a sum of two numbers .*/
float sub(float x,float y); /* Function that calculates and returns a subtraction of two numbers .*/
double mul(double x,int y ); /* Function that calculates and returns a product of two numbers .*/
double div(double x,int y); /*Function that calculates and returns a division of two numbers . */
double Power(double x, int y); /*Function that calculates x^y recursively with a stop condition at y=1 or returns 1 if y=0  or returns 0 if x=0. */
double Exponent(int x); /*Function that calculates e^x where e is Euler's number , a constant equal to 2.718281. */
#endif
