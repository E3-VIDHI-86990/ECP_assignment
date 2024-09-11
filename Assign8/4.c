#include<stdio.h>
 
typedef struct student{
        int rollno;
		char name[20];
		int std;
		float marks;
	}stud;

void accept_stud( stud *ptr);
void print_stud(stud *ptr);
void search_stud(stud *ptr);
void searchbyname(stud *ptr);

int main()
{ 
 stud s[5];
 accept_stud(s);
 print_stud(s);
 search_stud(s);
 searchbyname(s);
return 0 ;

 }

void accept_stud(stud *ptr)
 {
  for( int i=0 ;i<5 ; i++)
  {
    printf(" ENTER STUDENT INFORMATION : 1. rollno \n 2.name\n 3.std\n 4.marks");
	scanf("%d %s %d %f",&ptr[i].rollno , ptr[i].name, &ptr[i].std , &ptr[i].marks);
	}
	}

 void print_stud(stud *ptr)
 {
  printf(" Entered information is :");
  for ( int i=0; i< 5 ; i++)
   {
   printf(" roll no is %d name is %s standard is  %d  marks are %f\n ",ptr[i].rollno,ptr[i].name,ptr[i].std,ptr[i].marks);
   }
   printf("\n");
   }

void search_stud(stud *ptr)
{  
   int rollno;
   printf(" Enter roll no you want information of:");
   scanf("%d",&rollno);
   for(int i=0;i<5;i++)
   {
   if (rollno == ptr[i].rollno)
   {
     printf("rollno : %d , name : %s , standard %d,  marks %f ",ptr[i].rollno,ptr[i].name,ptr[i].std,ptr[i].marks);
	 }
	 }
}

 void searchbyname(stud *ptr)
 {
   char name[20];
   printf("Enter name you want to search ");
   scanf("%s",name);
   for(int i=1;i<5;i++)
   {
     if(name == ptr[i].name)
	 {
	   printf(" your entered student name  %s found and information regarding his/her :\n roll no : %d \n std :%d \n marks: %f",name, ptr[i].rollno,ptr[i].std,ptr[i].marks); 
}
}
}
