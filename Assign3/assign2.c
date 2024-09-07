#include<stdio.h>

int main()
{
  int i=1 ,num ;
  printf(" Enter a num for multiplication table " );
  scanf("%d",&num);
  while (i <= num)
    { printf(" multiplication table of %d is \n : ",num);
      printf(" %d * %d = %d ", num , i ,num*i);
	  i++;
	  }

   return 0 ;

   }
