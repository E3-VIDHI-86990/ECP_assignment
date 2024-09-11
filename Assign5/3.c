#include<stdio.h>

void rev_array(int arr[])
{
 int temp;
  for(int i =0 ; i<((10/2)+1); i++)
  {
    temp = arr[i];
	arr[i] = arr[9-i];
	arr[9-i] = temp ;
	}
	}

int main()
{
  int i;
  int arr[10]={1, 2, 4, 5, 6, 7, 8,5,8,9};
 
  printf(" Before swapping \n");
 for(int i =0; i<10;i++)
  {;
  printf(" %d ",arr[i]);}
  rev_array(arr);

  printf(" AFter swapping \n ");
  for(int i = 0; i<10;i++)
  {
  printf("%d ", arr[i]);
  }
 
  return 0;
  }

