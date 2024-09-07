#include<stdio.h>

int main()
{  
	int count=1,num, rem , sum ;
   while ( count <= 500)
   {
    num = count ;
	sum = 0;

	while(num)
	{
	  rem = num %10;
	  sum = sum +(rem*rem*rem);
	  num = num /10;
     }
	
	 if (count == sum)
	 {
	  printf("%d\n" , count);
	  }
	  count++;
	  }
return 0;
  }
