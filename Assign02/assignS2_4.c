#include<stdio.h>
int main()
{
  int day , month , year;
  int week_days ;

  printf("Enter date in the format dd/mm/yy :");
  scanf("%d/%d/%d", &day, &month, &year);

 if(month<3)
   {
     month += 12;
     year-- ;
   }
  week_days = (day + (13 * (month + 1) / 5) + (year % 100) + ((year % 100) / 4) + ((year / 100) / 4) + 5 * (year / 100)) % 7;

   switch(week_days)
   {
     case 0 : printf(" The day is Saturday.\n");
	          break ;
     case 1 : printf(" The day is Sunday.\n");
	          break ;
     case 2 : printf(" The day is Monday.\n");
              break;
	 case 3 : printf(" The day is Tuesday.\n");
              break;
	 case 4 : printf(" The day is Wednesday.\n");
	          break ;
     case 5 : printf(" The day is Thursday.\n");
	          break ;
     case 6 : printf(" The day is Friday.\n");
	          break ;
     default : printf(" Invalid entry ");
	          break;
			  }
	return 0 ;
	}
	
   
