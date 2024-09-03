#include<stdio.h>

int main()
{
 int n ,x,max,i;
 printf("Enter n number : ");
  scanf("%d",&n);
 max = 0 ;
  for (i=1;i<+n;i++)
  {
    printf("Enter numbers -%d :", i);
	scanf(" %d",&x);

	if (max<x)
    	max = x ;
	}
	
	printf("max =%d",max);
	return 0;

}

