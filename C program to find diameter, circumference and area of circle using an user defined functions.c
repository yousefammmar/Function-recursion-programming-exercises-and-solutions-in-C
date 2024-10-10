//C program to find diameter, circumference and area of circle using an user defined functions
#include <stdio.h>
int area(float r){
    float sum=r*r*3.14;
    return sum;
}
int circumference(float r){
    float sum=r*6.28;
    return sum;
}
int diameter(float r){
    float sum=2*r;
    return sum;
}
int main(){
    float r;
    printf("enter the radius of the circle");
    scanf("%f",&r);
    area(r);
    circumference(r);
    diameter(r);
    printf("the area=%d\n",area(r));
    printf("the circumference=%d\n",circumference(r));
    printf("the diameter=%d\n",diameter(r));
}