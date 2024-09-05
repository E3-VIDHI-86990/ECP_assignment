#include<stdio.h>

int  main()
{
  int month, year, ;
  printf(" Enter year and month :");
  scanf("%d%d",&year , &month);

  switch(year)

   case 1 : if((year%400==0 ) ||(year %4 == 0))

            printf(" Given year %d is leap year ",year);


