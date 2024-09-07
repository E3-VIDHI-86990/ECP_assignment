#include<stdio.h>

int main()
{
 int i,x,a,b,c;
 a = 0;
 b = 1;
 printf("Enter a number : ");
 scanf("%d",&x);

 for(i=1;i<=x;i++)
  {
   printf(" %d",a);
   c = a+b;
   a = b ;
   b = c ;
   }

  return 0 ;

  }
