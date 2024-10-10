//C program to check even or odd using functions
#include <stdio.h>
void EVENORODD(int num){
    if(num%2==0)
    printf("%d is an even number",num);
    else 
    printf("%d is an odd number",num);
}
int main (){
  int numb;
    printf("enter any number");
    scanf("%d",&numb);
    EVENORODD(numb);
    return 0;
}