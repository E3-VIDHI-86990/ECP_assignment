#include<stdio.h>

int main()
{ 
 int year ;
 printf("Enter year ");
 scanf("%d", &year );

 ((year%400==0)||(year%4 ==0)) ? printf("Entered year is leap year "): printf(" Entered year is not a leap year ");

 return 0 ;

 }
