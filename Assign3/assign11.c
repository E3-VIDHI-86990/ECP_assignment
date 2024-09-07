 #include<stdio.h>

int main()
{
  int i=1 ,num ;
  printf(" Enter a num for multiplication table " );
  scanf("%d",&num);
  for ( i = 1 ; i <= 10; i++)
  {
   printf(" Multiplication of %d is :",num);
   printf(" %d * %d = %d \n",num, i , num*i);
   }

   return 0 ;
}
