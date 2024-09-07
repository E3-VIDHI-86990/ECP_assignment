#include<stdio.h>

int main()
{
  int n1,n2,ch,Add, Sub , Mul , Div;
  char op;
  typedef enum menu { EXIT , ADD , SUBT , MUL , DIV }menu ;
   do 
   {
   printf("Enter num 1 ");
   scanf("%d",&n1);
   printf(" Enter operator");
   scanf("%*c%ch",&op);
   printf("Enter num2 ");
   scanf("%d",&n2);

   printf(" 0. EXIT \n 1. ADDITION \n 2. SUBSTRACTION \n 3. MULTIPLICATION \n 4. DIVISION");
   printf( " Enter your choice ");
   scanf("%d",&ch);

   switch (ch)
    { 
	 case  EXIT : 
	       printf(" You enetered exit page terminated here ");
		   break;

	case   ADD : 
	       printf("Addition of two numbers is %d + %d = %d ",n1 , n2 , n1+n2);
		   break;
    case  SUBT :
	       printf(" Subatraction of numbers is %d - %d = %d ",n1 , n2 , n1-n2);
		   break;
	case  MUL :
	       printf(" Multiplication of numbers is %d*%d = %d ", n1 , n2 , n1*n2);
		   break;
	case  DIV :
	       if (n2 != 0) 
		   {
	       printf(" Division of numbers is %d / %d = %d " , n1, n2 , n1/n2);
		   }
		   else 
		   { printf(" Invalid input");
		   }
		   break;
	  }
   }
 
 while(ch != 0);
return 0 ;
}
