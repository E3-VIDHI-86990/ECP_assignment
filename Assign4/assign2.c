#include<stdio.h>

float pow( float base , float exp);

int main()
 
  {
    float exp,base,x;
    printf("Enter base value and exponent value to calculate power : ");
    scanf("%f%f", &base, &exp);
    x = pow(exp,base);
    printf("Power =%f",x);
    return 0 ;
   }

float pow( float exp, float  base)
   {  
     int i ;
	 float res = 1 ;
     for( i = 1; i<=exp ; i++)
	  {
	    res = res*base;
		}
  return res;
  }

 

