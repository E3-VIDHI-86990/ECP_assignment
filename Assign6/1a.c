#include<stdio.h>
#include<string.h>


int main()
{
  size_t len;
  char str[30];
  printf(" enter string");
  scanf("%[^\n]s",str);
  len = strlen(str);
  printf(" Length = %d \n",len);

  return 0 ;
  }

