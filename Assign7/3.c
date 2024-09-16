#include<stdio.h>

void sum_rowelements(int arr1[3][3])
{
 int n;
  printf("enter the row sum you want \n");
  scanf("%d",&n);
  int sum = 0;
  if(n == 1)
  {
    int i = 0;
	{
	 for(int j=0 ; j<3 ;j++)
	  {
	   sum = sum +arr1[i][j];
	   }
	   printf(" Sum of given row : %d \n",sum );
	   printf("\n");
	   }
	   }
	
 else  if(n == 2)
  {
    int i = 1;
	 for 
	  (int j=0 ; j<3 ;j++)
	  {
	   sum = sum +arr1[i][j];
	 }
	 printf(" Sum of given row : %d \n",sum );
	   printf("\n");
	   }
	   


  else
  {
    int i = 3;
	 for (int j=0 ; j<3 ;j++)
	  {
	   sum = sum +arr1[i][j];
	   }
	   printf(" Sum of given row : %d \n",sum );
	   printf("\n");
	   }
}



void sum_colelements(int arr1[3][3])	
{
int n;
 printf(" enter the coulum no you want sum of :");
 scanf("%d",&n);
int sum = 0;

if(n == 1)
  {
    int j =1;
	 for 
	  (int i=0 ; i<3 ;i++)
	  {
	   sum = sum +arr1[i][j];
	   }
	   printf(" Sum of given column : %d \n",sum );
	   printf("\n");
	   }

 else if(n == 2)
  {
    int j = 2;
	 for 
	  (int i=0 ; i<3 ;i++)
	  {
	   sum = sum +arr1[i][j];
	}
	   printf(" Sum of given coloumn : %d \n",sum );  
	   printf("\n");
	   }
	   
  else 
  {
    int j = 3;
	 for 
	  (int i=0 ; i<3 ;i++)
	  {
	   sum = sum +arr1[i][j];
	   }
	   printf(" Sum of given coloumn : %d \n",sum );
	   printf("\n");
	   }

}
 





int main()
{
  int arr1[3][3] = {{3,5,2},{6,9,2},{2,8,5}};
  sum_rowelements(arr1);
  sum_colelements(arr1);
  return 0;
  }

