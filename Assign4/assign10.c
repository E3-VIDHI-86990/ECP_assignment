#include<stdio.h>

void leap_year(int n );
void days(int x,char month);

int main()
    { 
       int x ;
	   char month;
       printf("Enter year :");
       scanf("%d",&x);
       leap_year(x);
	   printf(" Enter month :");
	   scanf("%c",&month);
	   days(x,month);
       return 0 ;
     }
	
void leap_year(int x)
 {
   if ( x % 400 == 0 || ((x % 4== 0) &&( x% 100 == 0)) )
   {  
     printf(" Entered year is a leap year ");
   }
   else 
   { 
   printf(" entered year is not a leap year ");
   }
 }

 void days(int x,char month)
 {
    int x ,year ;
	
	 switch(month)
	 {
	  case 'J' :
	            printf(" Month has 31 days ");
				break;
	  case 'M' :
	           printf(" month has 31 days");
			   break;
	 case 'A' : 
	           printf(" month has 30 days :");
			   break;
	 case 'F' : 
	          if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
                printf("February has 29 days (leap year).\n");
            } 
			else {
                printf("February has 28 days.\n");
            }
			break;
	 case 'U' :
	           printf(" month has 30 days :");
			   break;
       case 'S' :    
	           printf(" month has 30 days :");
			   break;
	 case 'G' : 
	          printf(" month has 31 days :");
			   break;
     case 'N' :
	           printf(" month has 30 days :");
			   break;
      case 'D' : 
	           printf(" month has 31 days :");
			   break;
	   default : 
	           printf(" invalid input");
        }
		}
