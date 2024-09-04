#include<stdio.h>

int main()
{
	int Num1 , Num2, Sum, Diff , Prod ;
      printf("Enter Num1 and Num2 : \n ");
	scanf("%d%d",&Num1 , &Num2);
	Sum = Num1 + Num2 ;
	Diff = Num1 - Num2 ;
	Prod = Num1*Num2;

	// signed int 


	printf(" Addition of two numbers are :%d\n",Sum);
        printf(" Difference of two numbers are :%d\n",Diff);
	printf(" Product of two numbers are :%d\n",Prod);
	return 0 ;
	// unsigned int 	

        printf("Enter Num1 and Num2 : \n ");
	scanf("%u%u",&Num1 , &Num2);
	Sum = Num1 + Num2 ;
	Diff = Num1 - Num2 ;
	Prod = Num1*Num2;


	printf(" Addition of two numbers are :%u\n",Sum);
        printf(" Difference of two numbers are :%u\n",Diff);
	printf(" Product of two numbers are :%u\n",Prod);

      



return 0 ;




}

