#include<stdio.h>

int main()
{

 int x ,rev=0,rem,Given_Number  ;
 printf(" Enter a number to check palindrome:  ");
 scanf("%d",&x);
 Given_Number = x ;

 while(Given_Number != 0)

  { 
    rem = Given_Number % 10;
	rev = (rev*10)+rem ;
	Given_Number /= 10;

    }

  if ( x == rev )
    { 
     printf("Given number is palindrome ");
    }  
   else
   { 
    printf("Given number is not palindrome");
    }

return 0 ;

}

    
