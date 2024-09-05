#include<stdio.h>

int main()
{ 
 int quan ;
 float dis_val;
 printf(" Enter quanity : ");
 scanf("%d" , &quan);

 if ( quan <=30 )
  { printf(" Price for you quantity = %d ", quan*5 );
  }
 else if ( 50 >= quan > 30 )
  {
   dis_val= ( quan - (0.1*quan) );
   printf(" Price for you quantity with 10 percent discount = %f ",dis_val );
   
   }
 else ( quan > 50 );
     {
     dis_val = ( quan - ((3/20.0)*quan));
     printf("Price for your quantity with 15 percent discount = %f", dis_val);
      } 
 
  return 0;

  }

