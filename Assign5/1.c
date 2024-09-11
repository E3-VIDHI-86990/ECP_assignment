#include<stdio.h>

int main()
{
int i;
int marks[5];
printf(" ENTER MARKS OF 5 SUBJECT :");
for(int i=0;i<5;i++)
{
  printf("marks [%d ]\n",i);
  scanf("%d",&marks[i]);
  }

 for(int i=0;i<5;i++)
 {
  printf("marks [%d]= %d\n",i,marks[i]);
  }
  
 int sum = 0 ;
 for(i=0;i<5;i++)
 {
 sum = sum+marks[i];
 }
 float avg = sum/5;
 printf(" SUM of marks : %d",sum);
 printf(" AVG of marks : %f",avg);
  
  }
