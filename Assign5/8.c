#include<stdio.h>

void search_fun( int arr[10]);

int main()
{
  int arr[10];
  printf( "Enter array elements : \n");
  for ( int i = 0;i<10 ;i++)
  { 
    printf(" arr[%d]:",i);
    scanf("%d",&arr[i]);
	}
  printf(" array elements are :\n");
  for (int i = 0 ; i<10;i++)
  {
   printf("arr[%d] = %d ",i,arr[i]);
   }

   search_fun(arr);
   return 0 ;
   }

void search_fun(int arr[10])
{ 
  int num;
  printf("enter the number you want to search in array:\n");
  scanf(" %d",&num);
  for (int i = 0;i<10;i++)
  {
    if ( num == arr[i])
	{
	  printf(" in array %d is at %d ",arr[i],i);
 }
  else {
  printf("%d",-1);
  }
   
   }
   }
