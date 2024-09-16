#include<stdio.h>

int dublicate(int arr[10], int n)
{
  int i = 0;
   for (int j=1; j<n ; j++)
   {
     if (arr[i]!=arr[j])
	  { 
	    i++;
		arr[i] = arr[j];
		}
	}
	return i+1 ;
	}


int main()
{ 
  int arr[10] = { 1,2,2,3,4,5,6,6,8,9};
  int n = sizeof(arr)/sizeof(arr[0]);

 int newlength = dublicate(arr,n);
  
  for (int i=0 ; i<newlength ; i++)
  {
    printf(" %d", arr[i]);
}
return 0;
}
