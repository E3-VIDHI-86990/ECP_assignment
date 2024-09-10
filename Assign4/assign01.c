#include<stdio.h>

int fact();

int main()
{ 
  int n,x;
  printf(" Enter a valur for n : ");
  scanf("%d",&n);
  x = fact(n);
  printf(" Factorial of number n is :%d ",x);
  return 0 ;

  }
 
  int fact( int n)
{  
  int res=1,i ;
  for (i =1 ; i<= n ; i++)
      {
       res = res*i ;
         }
 return res ;

}
   
