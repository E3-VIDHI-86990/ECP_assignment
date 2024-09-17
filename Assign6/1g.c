#include<stdio.h>
#include<string.h>

int main()
{
  char str[30];
  printf("ENTER STRING");
  scanf("%[^\n]s",str);
  char *ptr;
  ptr = strchr(str,'B');
  printf(" str = %u \n",str);
  printf("str = %u \n",ptr);
  printf("character = %c\n",*ptr);

  return 0;
  }

