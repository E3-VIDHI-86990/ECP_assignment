#include<stdio.h>

int hexa(int n )
{ 
   
  if (n == 0)
       {return 0 ;
	   }
   hexa(n/16);
   int x = n%16 ;
if ( x >= 10 && x<= 15)
 {
   switch (x)
   {
     case 10 : printf("A");
	           break;

     case 11 : printf("B");
	           break;

     case 12 : printf("C");
	           break;
	 
     case 13 : printf("D");
	           break;
	  
     case 14 : printf("E");
	           break;

     case 15 : printf("F");
	           break;

     default : printf("invalid");
    } 
}
  else 
  {
     printf("%d",x);

}
}


int main()
{  
 int n ; 
 printf(" enter a number");
 scanf("%d",&n);
 
if ( n==0)
 {printf("0");
 }
else 
{
 printf(" hexa value is  %d ", n);
 hexa(n);
 

 printf("\n");


return 0;
 }

}
















