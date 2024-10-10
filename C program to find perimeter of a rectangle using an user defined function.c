//C program to find perimeter of a rectangle using an user defined function
#include <stdio.h>
int area(int a,int b){
    int sum=2*a + 2*b;
    return sum;
}
int main(){
    int x,y;
    printf("enter the length and the width of a rectangle\n");
    scanf("%d%d",&x,&y);
    int sum=area(x,y);
    printf("the perimeter of the rectangle=%d",sum);
}