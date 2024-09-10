#include<stdio.h>

void fun_ADD(int a, int b);
void fun_SUB(int a, int b);
void fun_MUL(int a, int b);
void fun_DIV(int a, int b);


int main()
{
  int a , b ,res ,n;
  enum menu{ EXIT , ADD, SUB , MUL , DIV}ch1;
  printf("0. EXIT ,\n 1. ADD \n 2 . SUB\n 3. MUL\n 4 . DIV");
  printf(" enter you choice");
  scanf(" %d",&ch1);
  printf(" Enter two number for operation : ");
  scanf("%d%d",&a,&b);
 
  switch(ch1)
  {
    case ADD : fun_ADD(a,b);
	          break;

	case SUB : fun_SUB(a,b);
	         break;

	case MUL : fun_MUL(a,b);
	        break;
	 
	case DIV : fun_DIV(a,b);
	        break;
   
   default : printf(" Invalid input ");

	}
 return 0;
 }

 void fun_ADD(int a, int b)
   {
    printf("Addition of %d + %d is = %d ", a,b,a+b);
	}

void fun_SUB(int a , int b)
{
 printf(" Substractio of %d - %d = %d" , a,b,a-b);
}
 void fun_MUL(int a, int b)
   {
    printf("Multiplication of %d * %d is = %d ", a,b,a*b);
	}
void fun_DIV(int a, int b)
   {
    printf("Division of %d / %d is = %d ", a,b,a/b);
	}
  
