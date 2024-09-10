#include<stdio.h>

int nextfibonacci();
int main()
{
 int i ;
 printf(" fibonacci series : \n ");

 for (i = 0 ; i<= 10 ; i++)
 {
  printf("%d",nextfibonacci());
  }
  return 0;

  }

int nextfibonacci()
{
 int next;
 int a = 0 ;
 int b =1 ;
 next = a ;

 int temp = a;
 a = b;
 b = temp +b;

 return next;
 }
