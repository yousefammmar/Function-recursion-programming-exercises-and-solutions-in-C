//C program to print elements of array using recursion
#include <stdio.h>
void prim(int arr[],int st,int end){
if(st<end){
    printf("%d\t",arr[st]);
    st++;
    return prim(arr,st,end);
}
else return;
}
int main (){
int j;
printf("enter the size of an array: ");
scanf("%d",&j);
int n[j];
for (int i=0;i<j;i++){
    printf("enter the integer for %d:",i);
    scanf("%d",&n[i]);
}
prim(n,0,j);
return 0;
}
