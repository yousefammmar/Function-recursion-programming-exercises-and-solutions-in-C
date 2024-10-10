//C program to find diameter, circumference and area of circle using function
#include <stdio.h>
#include <math.h>
int main (){
    float x,r,a,d,c;
    printf("enter the value of the radius");
    scanf("%f",&r);
    d=2*r;
    c=3.14*r*2;
    x=pow(r,2);
    a=3.14*x;
    printf("the diameter=%f \n the circumference=%f \n the area=%f",d,c,a);
    return 0;
}