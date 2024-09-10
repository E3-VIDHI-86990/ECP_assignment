#include<stdio.h>
 
int fun(int a, int b, int *sum,int *prod);

int main()
{
int a,b;
 int sum,prod;
 printf("Enter two numbers ");
 scanf("%d %d",&a,&b);
fun(a,b,&sum,&prod);
printf(" Sum and product is :%d %d ",sum,prod);
return 0;
}

int fun(int a , int b,int *sum, int *prod)
{  
  *sum = a+b;
  *prod = a*b;
}
