//C program to find cube of a number using function
#include <stdio.h>
#include <math.h>
int main (){
    int x,ans;
    printf("Enter the number please");
    scanf("%d",&x);
    ans = pow(x,3);
    printf("the answer =%d",ans);
    return 0;
}