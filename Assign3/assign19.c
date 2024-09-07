#include<stdio.h>
 
   int main()
   {
     int i,j,product,num1,num2 ;
	 printf("Enter starting number :");
	 scanf("%d",&num1);
	 printf(" Enter Ending number :");
	 scanf("%d",&num2);
     for ( i = 1 ; i<= 10 ; i++)
       {
       for( j = num1  ; j <= num2 ; j++)
       {
        product = i*j;
       printf("%3d",product);
  
          }
      printf("\n");
  
      }
  return 0 ;
 } 
