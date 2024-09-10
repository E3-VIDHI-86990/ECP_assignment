#include<stdio.h>

int pow(int base , int exp);
int main()
{
 int base ,x,exp ;
 printf(" Enter base and exponent value :");
 scanf("%d%d",&base , &exp);
 x = pow(base,exp);
 printf(" Power calculation of %d is %d ", base , x);}

 int pow(int base , int exp)
 {
   if ( exp == 0 )
     {
	 return 1 ;
	 }
 else if ( exp == 1)
 {
     return base ;
	 }
 else
 {
  return base*pow(base,exp-1);
  }
 }
