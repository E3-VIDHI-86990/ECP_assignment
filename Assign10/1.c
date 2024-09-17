#include<stdio.h>

int count_1bit(unsigned int n)
{
  int count = 0;
  while(n>0)
  {
   count += n&1;
   n >>= 1;
   }
  return count;
  }

int main()
{
 unsigned int num = 29;
 int res = count_1bit(num);
 printf("The number of 1 bit in %u is %d\n",num,res);
 return 0;
 }
