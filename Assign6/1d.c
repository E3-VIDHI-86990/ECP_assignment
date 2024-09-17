#include<stdio.h>
#include<string.h>

int main()
{
  char str1[30], str2[30];
  printf(" Enter string 1:");
  scanf("%[^\n]s",str1);
  strncpy(str2,str1,10);
  printf("STR 2 :%s",str2);
  return 0;
  }
