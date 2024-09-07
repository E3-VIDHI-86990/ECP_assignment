#include<stdio.h>

int main()
 {
  int fact = 1, x,i ;
  printf(" Enter a number :");
  scanf("%d",&x);
   
 for(i = 1 ; i<=x ; i++)
  {
   fact =  fact *i ;
   }

  printf(" Factorial of no. %d is : %d ",x, fact);

   return 0 ;

   }
   
