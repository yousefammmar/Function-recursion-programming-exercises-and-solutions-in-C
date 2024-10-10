//C program to find maximum and minimum using functions
#include <stdio.h>
#include<math.h>
int main(){
    int x,y,maxi,mini;
    printf("enter the first and second number");
    scanf("%d\n%d",&x,&y);
    maxi= fmax(x,y);
    mini= fmin(x,y);
    printf(" the maximum number is %d\n the minimum number is %d",maxi,mini);
    return 0;
}