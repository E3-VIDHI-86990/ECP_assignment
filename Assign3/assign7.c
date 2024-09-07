#include<stdio.h>

int main()
{ 
  int n , i=1 , j ;
  printf(" enter a number :");
  scanf("%d",&n);

  while ( i<= n)
  {
   if ( n % i ==0)
   {
    if ( i < n/i)
	 printf("%d * %d = %d\n ",i , n/i , n);
	 }
	 i++;
	 }

	return 0 ;
	}
