#include<stdio.h>

int main()
{ 
   int operator, A,B;
   printf("Enter the operation you want to do : \n 1. Addition \n 2. Substraction \n 3. Multiplication \n 4. Division\n");
   scanf("%d", &operator);
   printf(" Enter two operands: " );
   scanf("%d %d", &A , &B);

   switch(operator)
    {
	 case 1 : printf("Addition is %d + %d = %d ", A,B,A+B);
	         break;
     case 2 : printf(" Substraction is %d - %d = %d ", A,B, A-B);
	         break;
     case 3 : printf(" Multiplication is %d * %d = %d" , A,B,A*B);
	         break;
     case 4 : printf(" Division is %d / %d = %d ", A,B, A/B);
	         break;
	 default : printf(" Invalid input ");
	  }

return 0;
}

