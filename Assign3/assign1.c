#include<stdio.h>

int main()
 {
   int num,i=0;
   char star;
   printf("Enter a number and a character : ");
   scanf("%d %c", &num , &star);

   while (i< num)
   { 
   printf("%c",star);
   i++;
   }

   return 0 ;

   }


