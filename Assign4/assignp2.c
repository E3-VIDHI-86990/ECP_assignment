#include<stdio.h>

int swap(int a , int b);


int main()
{  
  int a , b,x ;
  printf(" ENter two numbers");
  scanf("%d%d", &a, &b);

  printf(" before swap :%d   %d\n", a,b);
  x = swap(a,b);

return 0;
 }



  int swap(int a , int b)
  { 
    int temp,x;
	temp = a ;
	a = b;
	b = temp;
	x = printf(" after swap : %d %d ", a,b);
    return x ;
	}
