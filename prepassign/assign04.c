#include<stdio.h>

int main()
{
 
 int sub1 , sub2,sub3,sub4,sub5, total_marks;

 printf(" Enter subject 1 marks : ");
 scanf("%d",&sub1);
 printf(" Enter subject 2 marks : ");
 scanf("%d",&sub2);
 printf(" Enter subject 3 marks : ");
 scanf("%d",&sub3);
 printf(" Enter subject 4 marks : ");
 scanf("%d",&sub4);
 printf(" Enter subject 5 marks : ");
 scanf("%d",&sub5);
 
total_marks = sub1 + sub2 +sub3 + sub4 + sub5;
printf("Your total marks are = %d ", total_marks);


if (total_marks >= 90)
 {
  printf("Congrats your grade is Excellent");
  }
else if (90>total_marks>=80)
 {
  printf("Congrats your grade is A");
  }
else if (80>total_marks>=70)
 {
 printf("congrats your grade is B");
 }
else if (70>total_marks>=60)
 {
 printf("Your grade is c");
 }
else if (60>total_marks)
 {
 printf("Your grade is F");
 }

else
{
  printf("you are fail");

  }

return 0 ;

}
