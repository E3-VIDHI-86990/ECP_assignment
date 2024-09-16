#include<stdio.h>
#include<string.h>


void accept_name(char str[5][30])
{
  for(int i =0 ; i<5 ; i++)
  {
   printf("enter students name\n ");
   scanf("  %[^\n]s",str[i]);
   }
 }
 
 void print_name(char str[5][30])
 {
     for(int j = 0; j < 5; j++)
	 {
	printf(" %s\n ",str[j]);
    }
}

void sort_name(char str[5][30])
{ 
char temp [30];
 for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
	   }

int main()
{
   char str[5][30];
   accept_name(str);
   print_name(str);
   sort_name(str);
   print_name(str);
   return 0;
  }


