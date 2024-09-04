#include<stdio.h>

int main()
{
  int choice,temp;
  float Far,cel ;
  printf(" Enter your choice  \n 1. convert Celsius to farenhite \n 2. convert farenhite to celsius :" );
  scanf("%d", &choice);
  printf("Enter temperature  for conversion :  ");
  scanf("%d" , &temp);
   
   if (choice == 1 )
     // Celsius to Farenhite 
	 {
	 Far =( (( 9*temp)/5.0) + 32) ;
	 printf(" conversion of %d to farenhite is = %f ",temp , Far);
      }
     
   else if ( choice == 2 )
    // farenhite to celsius 
	{
	 cel =( (5/9.0)*(temp - 32 ));
	 printf(" conversion of %d to celsius is = %f ", temp , cel );
   }

   else 
     printf(" Invalid input ");

	return 0 ;


} 

	
    
  
  

