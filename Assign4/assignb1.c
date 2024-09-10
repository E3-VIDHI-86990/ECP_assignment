#include<stdio.h>

int factorial(int n);
int main()
{
 int n ;
 printf("Enter a number :");
 scanf("%d",&n);
 factorial(n);
 printf(" Factorial of %d is %d ",n ,factorial(n));
 return 0 ;
 }

 int factorial(int n)
 {
    if ( n == 1 || n == 0)
	{
	 return 1 ;
	 }
   else 
   {
	return n * factorial(n-1);
	}
}
