#include<stdio.h>
#include<string.h>

int main()
{
  char str1[30] , str2[30];
  printf(" Enter string 1 ");
  scanf(" %[^\n]s", &str1);
  strcpy(str2,str1);
  printf(" str1 :%s", str1);
  printf(" str2 :%s",str2);
  printf(" str2 :%s",str2);

  return 0 ;
  }
