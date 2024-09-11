#include<stdio.h>

typedef struct student{
         int rollno;
		 char name[20];
		 float marks;
		 }stud;

int main()
{ 
  stud s ;
  printf(" Enter student information : 1. Roll no : \n 2. Name: \n 3.Marks \n");
  scanf("%d %s %f",&s.rollno,s.name,&s.marks);

  printf("1.ROLL NO : %d \n 2.NAME : %s \n 3.MARKS: %f \n",s.rollno,s.name,s.marks);
  return 0;

  }





