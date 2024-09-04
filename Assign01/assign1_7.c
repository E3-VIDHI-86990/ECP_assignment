#include<stdio.h>

int  main()
{
  int x,a,b,c,d;
  printf("ENTER 4 DIGIT NUMBER: ");
  scanf("%d",&x);
  d = x%10;
  x = x/10;
  c = x%10;
  x = x/10;
  b = x%10;
  x= x/10;
  a= x ;
  printf("face value of each digit: %d,%4d,%4d,%4d\n",a,b,c,d);
  printf(" Place value of each digit number : %d   %d    %d     %d\n", a*1000,b*100,c*10,d);
  printf("Reverse of the number is : %d  %d  %d  %d:\n" ,d,c,b,a);


  return 0 ;

  }

