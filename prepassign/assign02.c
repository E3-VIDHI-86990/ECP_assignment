#include<stdio.h>

int main()
{
  int i , n , fact=1  ;
  printf("Enter a number to calculate a factorial : ");
  scanf("%d",&n );
  
  for(i = 1 ; i<=n ;i++)
    {
	fact = fact*i ;
	}

	printf("factorial of %d  number is : %d ",n , fact);

return 0;
}
