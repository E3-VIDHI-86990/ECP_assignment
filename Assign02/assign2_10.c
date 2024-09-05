#include<stdio.h>

int main()
{
 char ch ;
 printf("Enter a Character : ");
 scanf("%c",&ch );

 if (( ch >= 'A' && ch <= 'Z') && (ch >=  'a' && ch <= 'z'))
   { printf(" Entered character is letter");
   }
  else if (ch >= 'A' && ch <= 'Z')
  {  printf("Entered character is uppercase letter ");
  }
  else if (ch >= 'a' && ch <= 'z')
  {  printf("Entered character is lower case letter ");
  }
  else if (ch >= '0' && ch <= '9')
  {  printf("Entered character is digit ");
  }

  else if (ch = '\n' || '\t' || '\r'|| '  ' )
  {   if (ch = '\n')
    {
	printf(" Entered character is for new line " );
	}
	else if (ch = '\t')
	{
	printf("Entered character is for new tab ");
	}
	else if (ch = '\r')
	{
	printf("Entered character is for carriage return ");
	}

	}
	else if (ch = ' ')
	{   
	printf(" Entered character is for space ");
	}
 
  else
  {  printf("Entered charactered is not valid input ");
  }


  return 0 ;


  }
