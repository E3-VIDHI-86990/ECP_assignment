#include<stdio.h>
 
void binary(int n)
{
  if(n>1){
   binary(n/2);}
  printf("%d",n%2);
  }
int main()
{
 int n ;
 printf(" Enter a number to find binary ");
 scanf("%d",&n);

 binary(n);
 return 0 ;
 }
 
