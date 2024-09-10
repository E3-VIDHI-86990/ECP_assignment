#include<stdio.h>
 
int fun(int a,int b,int *sum,int *diff,int *mul,int *div);

int main ()
{
  int a,x,n, b , sum , diff, mul , div;
  printf(" Enter two values ");
  scanf("%d %d" , &a, &b);
  fun(a,b,&sum,&diff,&mul,&div);
  printf(" sum of %d +%d = %d\n ", a,b,sum);
  printf(" diff of %d -%d = %d \n", a,b,diff);
  printf(" mul of %d *%d = %d\n ", a,b,mul);
  printf(" div of %d / %d = %d\n ", a,b,div);
  return 0 ;
  
 }

int fun(int a , int b , int *sum, int *diff , int *mul, int *div)
{
 *sum = a+b ;
 *diff = a-b;
 *mul = a*b;
 if (b == 0)
 {
 printf("Division by zero not allowed ");
 }
 else
 *div = a/b;
 }


