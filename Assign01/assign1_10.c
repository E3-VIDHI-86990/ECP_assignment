#include<stdio.h>
#include<math.h>

int main ()
{
  int a,b,c,area,X,s;
  
  printf("Enter three sides of triangle : ");
  scanf("%d%d%d",&a,&b,&c);

  s = a+b+c;
  X= s*(s-a)*(s-b)*(s-c);
  area = sqrt(X);
  
  printf("Perimeter of triangle :%d ", s);

  printf("Area of triangle :%d ",area);
  return 0 ;

  } 

