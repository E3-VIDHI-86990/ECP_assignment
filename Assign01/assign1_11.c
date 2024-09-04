#include<stdio.h>
#include<limits.h>

int main()
{
  char ch ;
  unsigned char ch1;
  short int i ;
  unsigned int i1;
  int i2 ;
  unsigned int i3 ;
  long int i4 ;
  unsigned long int i5 ;


  printf(" Data Type           Size             Formatspecifier              Range  \n ");
  printf(" char                %ld                  %c                        %d to %d\n ", sizeof(ch),CHAR_MIN,CHAR_MAX);
  printf(" Unsigned char       %ld                  %c                        %d to %d \n", sizeof(ch1),0,UCHAR_MAX);
  printf(" short int           %ld                  %hd                       %d to %d\n ", sizeof(i),SHRT_MIN,SHRT_MAX);
  printf(" Unsigned short int  %ld                  %hu                       %d to %d \n", sizeof(i1),0,UINT_MAX);
  printf(" int                 %ld                  %d                        %d to %d \n", sizeof(i2),INT_MIN,INT_MAX);
  printf(" Unsigned int        %ld                  %u                        %d to %d \n", sizeof(i3),0,UINT_MAX);
  printf(" long int            %ld                  %ld                       %d to %d \n", sizeof(i4),LONG_MIN,LONG_MAX);
  printf(" Unsigned long int   %d                    %u                       %d to %d \n", sizeof(i5),0,ULONG_MAX);
 
 return 0 ;

 }

