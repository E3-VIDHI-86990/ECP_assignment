#include<stdio.h>

int main()
{ 
 int month , year ;
  printf(" Enter year ");
  scanf("%d" , &year);
  printf("Enter month ");
  scanf("%d", &month);

  switch(month)
  {
   case 1 : printf(" Jan - 31 days");
          break ;
   case 2 : if (( year % 400 == 0 && year % 100 == 0 ) || ( year % 4 == 0))
              {	  
			 printf("feb - 28 days ");
           }
		   else
		   {
	     	printf("feb - 29 days");
             }
	    	break;
   case 3 : printf(" March - 31 days ");
          break ;
   case 4 : printf(" April - 30 days ");
          break;
   case 5 : printf(" May - 31 days ");
          break;
   case 6 : printf(" June - 30 days ");
          break ;
   case 7 : printf(" July - 31 days ");
          break;
   case 8 : printf(" August - 31 days ");
         break;
   case 9 : printf(" September- 30 days ");
           break;
   case 10 : printf("October - 31 days ");
          break;
   case 11: printf(" November - 30 days ");
          break;
   case 12: printf(" December - 31 days ");
          break;
   default : printf(" Invalid input");
     }
 return 0 ;

}
