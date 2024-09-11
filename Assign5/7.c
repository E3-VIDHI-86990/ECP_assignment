#include<stdio.h>

int bub_sort(int arr[],int n)
{ int temp;
  for (int i=0;i<n-1;i++)
   {  for (int j=0;j< n-1-i;j++)
     {
	  if (arr[i]>arr[j+1])
	   {
	     temp = arr[j];
		 arr[j]= arr[j+1];
		 arr[j+1] = temp;
		}
      }
	}
	printf("sorted array ");
	for(int i =0;i<n;i++)
	{
	  printf(" %d",arr[i]);
	  }
	  printf("\n");
	
}


 int main()
 {
  int n =5;
   int arr[5]={1,4,3,9,7};
   bub_sort(arr,n);
   return 0 ;
   }
