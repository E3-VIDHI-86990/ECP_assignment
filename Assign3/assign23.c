#include<stdio.h>

int main()
{
int n ;
printf(" Enter value for n :");
scanf("%d",&n);

   for (int x = 1; x <= n; x++) {
     for (int space = 1; space <= n - x; space++)
         printf("  ");
   
       int coef = 1;
       for (int i = 1; i <= x; i++) {
            printf("%4d", coef);
           coef = coef * (x - i) / i;
        }
       printf("\n");
   }
  
}
