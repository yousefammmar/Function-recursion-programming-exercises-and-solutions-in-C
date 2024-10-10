//C program to perform all arithmetic operations using an user defined functions
#include <stdio.h>
int add(int a,int b){
    int sum=a+b;
    return sum;
}
int sub(int a,int b){
    int sum=a-b;
    return sum;
}
int mult(int a, int b){
    int sum=a*b;
    return sum;
}
int divi(int a,int b){
    b!=0;
    int sum=a/b;
}
int main(){
    int x,y;
    printf("enter any two numbers");
    scanf("%d\n%d",&x,&y);
    add(x,y);
    sub(x,y);
    mult(x,y);
    divi(x,y);
    printf("x+y=%d\n",add(x,y));
    printf("x-y=%d\n",sub(x,y));
    printf("x*y=%d\n",mult(x,y));
    printf("x/y=%d\n",divi(x,y));
}