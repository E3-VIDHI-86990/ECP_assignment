#include<stdio.h>

int main()
{
  int i,j,product ;
  printf("0. Exit \n");
  for ( i = 1 ; i<= 10 ; i++)
    { 
	for( j =1 ; j <=10 ; j++)
	 {
	  product = i*j;
	  printf("%3d",product);

        }
	printf("\n");
 
	}
return 0 ;
}

