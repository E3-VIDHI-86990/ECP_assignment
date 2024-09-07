#include<stdio.h>
int main ()
{
  int n1, n2 , x ;
   printf(" ENTER TWO NUMBERS :");
   scanf("%d%d",&n1,&n2);
  
   while (n2 > 0)
   {
    int rem = n1%n2 ;
	n1 =n2 ;
	n2 = rem;
   
	 }
	printf("GCD = %d" , n1);

	return 0 ;

	}
