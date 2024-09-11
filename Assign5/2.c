#include<stdio.h>

void accept_array( int arr[5]);
void printarray(int arr[5]);
void max_array(int arr[5]);
void min_array(int arr[5]);

int main()
{
  int arr[5];
  int num;
  accept_array(arr);
  printarray(arr);
  max_array(arr);
  min_array(arr);
return 0 ;

  }
 
 void accept_array(int arr[5])
 {
   printf(" enter array elements : ");
   for(int i=0;i<5;i++)
   {
   scanf("%d",&arr[i]);
   }
   }

  void printarray(int arr[5])
  {
    for (int i=0;i<5;i++)
	{ printf(" array [%d]= %d \n",i,arr[i]);
	}
	}
 
 void max_array(int arr[5])
 {
   int max;
   max = arr[0];
   for (int i=1;i<5;i++)
    { if (max < arr[i])
     	 { max = arr[i];
		 }
		 
		}
		printf("max is %d\n",max);	  

	}

  void min_array(int arr[5])
  {
   int min;
   min = arr[0];
   for( int i=1;i<5;i++)
   {
     if(min > arr[i])
	 {
	  min = arr[i];
	  }
	  }
	  printf(" min : %d\n",min);
	  }
