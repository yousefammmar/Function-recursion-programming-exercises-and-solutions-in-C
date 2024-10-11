//C program to count number of digits in an integer using user defined function
#include <stdio.h>
int digit(int n){
  int count=0;
  while(n!=0){
    n=n/10;
    count++;
  }
  return count;
}
int main(){
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
digit(num);
  printf("Number of digits: %d\n",digit(num));
}