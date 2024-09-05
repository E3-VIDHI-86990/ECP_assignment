#include<stdio.h>

int main()
{
  float x , y ;
  printf(" Enter x and y coordinates : ");
  scanf("%f%f" ,&x,&y);

 if (x > 0 && y > 0)
 {
  printf(" Entered coordinates lies in first quadrant ");
 }
 else if ( x< 0 && y >0)
 {
  printf(" Entered coordinates lies in second quadrant ");
 }
 else if (x <0 && y <0)
  {
  printf(" Entered coordinates lies in third quadrant ");
  }
  else if( x>0 && y<0)
  {
  printf(" Entered coordinates lies in fourth  quadrant ");
  }
  else if (x==0 && y==0)
  {
  printf(" Entered coordinates lies in origin");
  }
  else 
  {
  printf(" Invalid entry ");
  }

  return 0 ;

  }

