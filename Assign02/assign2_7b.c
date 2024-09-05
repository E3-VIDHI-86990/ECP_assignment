#include<stdio.h>
int main()
{
  int year ;
  printf(" Enter year " );
  scanf("%d",&year);

  if ((year % 400 == 0 ) && (year % 4 == 0 ))
   {
   printf(" Entered year is a leap year ");
   }
   else {
    printf(" Entered year is not a leap year ");
	}

return 0 ;
}

