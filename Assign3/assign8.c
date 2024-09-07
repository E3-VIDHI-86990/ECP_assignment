#include<stdio.h>

int main()
{
 int  n ,count ;
 printf(" Enter a number");
 scanf("%d",&n);

 for(count = 2 ; n >1 ; count++)
  {
   while(  n % count == 0)
    {
	 printf("%d",count);
	 n = n/count ;
	 }
	 }

return 0;
}
	
 							
