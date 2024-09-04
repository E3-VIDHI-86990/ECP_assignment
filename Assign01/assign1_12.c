#include<stdio.h>
#include<float.h>

int main()
{
  printf(" The float  = %e to %e \n",FLT_MIN,FLT_MAX);
  printf(" The Double  = %e to %e \n",DBL_MIN,DBL_MAX);
  printf(" The Long Double = %Le to %Le \n ",LDBL_MIN,LDBL_MAX);

  return 0 ;

  }
