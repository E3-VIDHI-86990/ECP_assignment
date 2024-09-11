
#include<stdio.h>

int search_fun( int arr[10]);

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

int search_fun(int arr[10])
{
  int n;
  printf(" enter the value to find in array :");
  scanf(" %d",&n);

 int  first = 0;
 int  last = n-1;
 int  middle =(first+last)/2;
  while( first <= last )
    {
        if ( arr[middle] < n )
            first = middle + 1;
        else if ( arr[middle] == n )
        {
            printf("%d found at location %d.\n",n, middle+1);
            break;
        }
        else
            last = middle - 1;
        middle = (first + last)/2;
    }
    if ( first > last )
        printf("Not found! %d is not present in the list.\n", n);
    return 0;
}
