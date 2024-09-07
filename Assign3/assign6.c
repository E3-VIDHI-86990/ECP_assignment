#include<stdio.h>

int main()
{
 int x , i=1 ;
 printf(" Enter a number : ");
 scanf(" %d",&x);


 while( i < x )
{ 
 if ( x % i == 0)
 {
   printf(",%2d", i);
   }
 i++;
 }

 return 0 ;

 }
   
