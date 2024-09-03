#include<stdio.h>

int main ()
{
  int a , b,sum, n, i ;
  a = 0 ;
  b = 1 ;

printf("Enter a number : ");
scanf("%d",&n);
   for (i=1;i<=n;i++)

 {
     printf("%d",a);
     sum = a +b ;
	 a = b ;
	 b = sum;

	 }
	 return 0 ;

}


