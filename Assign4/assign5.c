# include<stdio.h>

void print_char( char ch, int n);

int main()
{ 
  char ch ;
  int n,i ;
  printf("Enetr a character : ");
  scanf("%c" , &ch);
  printf(" How many times you want to print ");
  scanf("%d",&n);
  print_char (ch, n);

  return 0 ;
  }

 void print_char(char ch,int n)
   {  int i;

     for ( i = 1 ; i<= n ; i++)
	  {
	   printf("%c",ch);
	   }
	   printf("\n");

}

