#include<stdio.h>

int main()
{
 char ch;
  FILE *fp = fopen("file1.txt","r");

  while(( ch = fgetc(fp)) != EOF)
  {
    printf("%c",ch);
	}
 
  fclose(fp);
  return 0 ;
  }

