#include<stdio.h>
 
void accept_arr(int arr[3][3]);
void print_arr(int arr[3][3]);

 int main()
 {
   int arr[3][3];
   accept_arr(arr);
   print_arr(arr);
   return 0;
   }

void accept_arr(int arr[][3])
{
  printf("ENTER Array elements ");
  for( int i = 0; i<3;i++)
  {
    for (int j= 0; j<3;j++)
	{
	  printf(" arr [%d][%d] = ", i,j);
	  scanf("%d",&arr[i][j]);
	  }
	  }

	  }

void print_arr(int arr[3][3])
{
  for(int i = 0 ;i<3;i++)
  {
  printf("\n");
   for(int j= 0;j<3 ; j++)
   {
     printf("%d \t",arr[i][j]);
	 }
	 }
	 printf("\n \n");
	 }

