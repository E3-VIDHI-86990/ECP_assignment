#include<stdio.h>

 int gcd(int n1, int n2)
 {
  if (n2==0)
  { return n1;
  }
else {
  return gcd(n2,n1%n2);
  }
  }


int main()
{
  int n1 , n2;
  printf("Enter two numbers ");
  scanf("%d%d",&n1,&n2);

  printf(" GCD of two numbers is %d",gcd(n1,n2));
  return 0 ;
  }
