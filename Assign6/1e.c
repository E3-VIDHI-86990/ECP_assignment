#include<stdio.h>
#include<string.h>

int main()
{
  char str1[30],str2[30];
  printf(" Enter string 1 :");
  scanf("%[^\n]s",str1);
  printf(" Enter string 2 :");
  scanf("%s",str2);
  int length = strcmp(str2,str1);
  
  if(length == 0)
  {
   printf("String is same");
   }
   else if(length > 0)
   {
    printf(" str1 is greter ");
	}
else 
{
  printf(" str 2 is greter ");
  }
  return 0;
  }
