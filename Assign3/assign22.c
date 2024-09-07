#include<stdio.h>

int main()
{
  int i , j , n;
  char ch;
  char alphabet = 'A';
  printf("Enter n :");
  scanf("%d",&n);
  for(i = 1; i<=5 ; i++)
  { 
   for( j = 1 ;j<=i ;j++)
    { 
	printf("*");
	}
	printf("\n");
	}
     
	
 for(i = 1; i<= 5;i++)
  {
   for(j =i ; j<=5 ; j++)
   { 
    printf("*");
	}
	printf("\n");
	} 
	

for ( i =1 ; i<=5 ; i++)
	{
	 for (j =1 ; j <=i ; j++)
	 { 
	  printf("%d",j);
	  }
	  printf("\n");
	  }
 
 
 for (i = 1 ; i<=5; i++)
 {
   for(j = 5 ; j>= 5-i+1 ; j--)
   {
    printf("%d",j);
	}
	printf("\n");
	}



for (i=1;i<=5;i++)
 {
 for(j = 1; j<=i ; j++)
 {
  printf("%c", alphabet);
  alphabet ++;
  }
 printf("\n");
}
 


for (i = 0;i<= 5;i++)
{ 
 for(j = alphabet +i  ; j< alphabet ; j++)
 {
  printf("%c",ch);
}
printf("\n");
}


for(i = 1; i<= n ; i++)
{
for( j = i ; j<= n ; j++)
  {
   printf("%c",'A'-1+j);
   }
   printf("\n");
   }

return 0;
}
