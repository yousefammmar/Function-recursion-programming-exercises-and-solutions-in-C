//C program to convert centimeter to meter and kilometer using an user defind function
#include <stdio.h>
float meter(float cm){
    float sum=cm/100;
    return sum;
}
float kilometer(float cm){
    float sum=cm/100000;
    return sum;
}
int main(){
    float cm,m,km;
    printf("enter the length in centimeter");
    scanf("%f",&cm);
    m=meter(cm);
    km=kilometer(cm);
    printf("the length in meter=%0.2f\n",m);
    printf("the length in kilometer=%0.2f\n",km);
    return 0;
}