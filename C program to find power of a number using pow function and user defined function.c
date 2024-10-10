//C program to find power of a number using pow function and user defined function
#include <stdio.h>
#include <math.h>
int ans(int a,int b){
    int sum=pow(a,b);
    return sum;
}
int main(){
    int x,y,sum;
    printf("enter any number\n");
    scanf("%d",&x);
    printf("enter the power\n");
    scanf("%d",&y);
    sum=ans(x,y);
    printf("%d^%d=%d",x,y,sum);
    return 0;
}