#include<stdio.h>

int main()
{
 int  year, month;
 printf("Enter year and month \n 1. january \n 2. febuarary \n 3. march \n 4. april \n 5. may \n 6. june \n 7. july \n 8. august \n 9. september \n 10 . october \n 11. november \n 12. december ");
 scanf("%d  %d", &year , &month );

 if ((year % 400 ==0) || ( year % 4 ==0))
    
	{
	if (month == 1|| month ==3||month ==5||month ==7||month ==8||month == 10||month ==12)
	{
	  printf(" Entered year %d is a leap year and days in the %d month is 31 days ", year, month);
	 
	 }
      else if (month == 2)
	   {
	   printf(" Entered year %d is a leap year and days in the %d month is 29 days",year , month);
	}
	else 
	 {
	 printf(" Entered year %d is a leap year and days in the %d month is 30 days",year , month);
	 }
	 }
 
 else 
 {
  
	if (month == 1|| month ==3||month ==5||month ==7||month ==8||month == 10||month ==12)
      {
	  printf(" Entered year %d is not a leap year and days in the %d month is 31 days ", year, month);
	  }

      else if (month == 2)
	  {
	   printf(" Entered year %d is not a leap year and days in the %d month is 28 days",year , month);
       }
	 else 
	 {
	 printf(" Entered year %d is not a  leap year and days in the %d month is 30 days",year , month);
	 }
	 
  }

return 0 ;
}
