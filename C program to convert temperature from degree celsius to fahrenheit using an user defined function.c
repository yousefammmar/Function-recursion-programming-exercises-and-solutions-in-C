//C program to convert temperature from degree celsius to fahrenheit using an user defined function
#include <stdio.h>
float fahrenheit(float a){
    float sum=(0.8*a)+ 32;
    return sum;
}
int main(){
    float c,f;
    printf("enter the temperature in celsius");
    scanf("%f",&c);
    f=fahrenheit(c);
    printf("the tremperature in fahrenheit=%f",f);
    return 0;
}