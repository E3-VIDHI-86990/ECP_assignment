#include<stdio.h>

typedef struct student {
             int rollno;
			 char name[20];
			 int std;
			 float marks;
	      }stud;

void accept_stud(stud *ptr);
void print_info(stud s);

int main()
{
  stud s ;
  accept_stud(&s);
  print_info(s);
  return 0 ;
  }
 
 void accept_stud(stud *ptr)
 {
   printf(" ENTER STUDENT INFO : 1. ROLL NO \n 2. NAME \n 3.STANDARD \n 4.MARKS \n ");
   scanf(" %d %s %d %f", &ptr ->rollno ,&ptr ->name , &ptr ->std , &ptr ->marks);
   }

 void print_info(stud s)
 {
   printf(" %d %s %d %f\n",s.rollno,s.name,s.std,s.marks);
   }

