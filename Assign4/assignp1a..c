#include<stdio.h>
 
int fun(int a, int b, int *sum,int *prod);


int a = 10 , b = 10 ;
int main()
{
 int sum,prod;
fun(a,b,&sum,&prod);
printf(" Sum and product is :%d %d ",sum,prod);
return 0;
}

int fun(int a , int b,int *sum, int *prod)
{  
  *sum = a+b;
  *prod = a*b;
}
