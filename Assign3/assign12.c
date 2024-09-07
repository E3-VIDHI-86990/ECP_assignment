#include<stdio.h>

int main()
{
  int base,i, index,pow = 1;
  printf(" Enter base value and Index : ");
  scanf("%d %d",&base,&index);

  for(i=1;i<=index;i++)
  {
   pow = pow*base ;
   }
   i++;
  printf(" 	Power of given number is : %d ", pow);
   return 0 ;

   }
