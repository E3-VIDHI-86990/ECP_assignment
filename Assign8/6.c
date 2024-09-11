#include<stdio.h>

typedef struct student{
           int rollno;
		   char name[20];
		   int std;
		   char grade ;
		   float percentage;
		 }stud;

void accept_info(stud *ptr);
void print_info(const stud *ptr);

int main()
{ 
 stud s[3];
accept_info(s);
print_info(s);
return 0;
}

void accept_info(stud *ptr)
{  
  printf(" ENTER INFORMATION OF STUDENTS \n" );
  for( int i = 0; i< 3 ;i++)
  { 
  printf(" ENTER ROLLNO :\n");
  scanf("%d",&ptr[i].rollno);
  printf("ENTER NAME :\n");
  scanf("%s",ptr[i].name);
  printf("ENTER STANDARD\n");
  scanf("%d",&ptr[i].std);
 
 if(ptr[i].std<=3)
 {
  printf(" ENTER GRADE :");
  scanf("%*c%c",&ptr[i].grade);
  }
  else 
  {
   printf(" ENTRE PERCENTAGE");
   scanf("%f",&ptr[i].percentage);
  }
   }
}
 
 void print_info(const stud *ptr)
 {  
 int i;
for(i = 0; i<3 ; i++)
{
 printf("Student information:");
 printf(" Roll no : %d ",ptr[i].rollno);
 printf(" Roll no : %s ",ptr[i].name);
 printf(" Roll no : %d ",ptr[i].std);
 
 ptr->std <= 3 ? printf(" result : %c\n",ptr->grade) : printf("result : %f\n",ptr -> percentage);
 }
}


