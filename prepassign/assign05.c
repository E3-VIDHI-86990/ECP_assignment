#include<stdio.h>

int main()
{
  int a ;
  char ch ;
  printf("Enter a Character: ");
  scanf("%c",&ch);
  printf("Enter a number : ");
  scanf("%d",&a);


  if (ch >= 'A' && ch <='Z')
  {
     printf(" Entered character is  uppercase");
  }
  else if (ch >= 'a' && ch <= 'z')
  {
     printf(" Entered character is lowercase");
	 }
  else 
  {
     printf("Entered character is other character");
	 }

//  printf("Total number of digit are : %d " ,'a');

	 return 0 ;

	 }

