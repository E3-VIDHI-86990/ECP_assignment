#include<stdio.h>

void add(int arr1[3][3] , int arr2[3][3]);
void sub(int arr1[3][3] , int arr2[3][3]);
void mul(int arr1[3][3] , int arr2[3][3]);
void accept_arr(int arr1[3][3],int arr2[3][3]);


int main()
{ 
 int arr1[3][3] , arr2[3][3]; 
 accept_arr(arr1,arr2);
 add(arr1,arr2);
 sub(arr1,arr2);
 mul(arr1,arr2);
return 0;
}


void accept_arr(int arr1[3][3],int arr2[3][3])
{
  printf("ENTER Array elements ");
  {
  for( int i = 0; i<3;i++)
  {
    for (int j= 0; j<3;j++)
	{
	  printf("arr [%d][%d] = ", i,j);
	  scanf("%d%d",&arr1[i][j],&arr2[i][j]);
	  }
	  }
      } 
	  }

void add(int arr1[3][3], int arr2[3][3])
{
 int addition[3][3];
  for (int i =0;i<3;i++)
  {
    for(int j=0;j<3;j++)
	{
	  addition[i][j] = (arr1[i][j] + arr2[i][j]);
	 printf(" addition = %d \t",addition[i][j]);
	 }
	 printf("\n");
	 }
	 }


void mul(int arr1[3][3] , int arr2[3][3])
{  
   int result[3][3];
 
    printf("Resultant Matrix is:\n");
 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
 
            for (int k = 0; k < 3; k++)
			{
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
 
            printf(" multiplication %d\t", result[i][j]);
        }
 
        printf("\n");
    }
}


void sub(int arr1[3][3] , int arr2[3][3])
{
  int substraction[3][3];
  for (int i=0;i<3;i++)
   {
     for(int j =0 ; j<3 ;j++)
	 {
	  substraction[i][j] = arr1[i][j] - arr2[i][j] ;
	  printf("substraction %d \t",substraction[i][j]);
	  }
	  }
	 printf("\n");
	 }
  












