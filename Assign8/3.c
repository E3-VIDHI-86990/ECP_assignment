#include<stdio.h>

typedef struct student{
           int rollno;
		   char name[20];
		   int std ;
		   float marks;
     }stud;

void accept_stud( stud *ptr);
void print_stud(stud *ptr);

 int main()
 {
  stud s[5];
  accept_stud(s);
  print_stud(s);
  return 0 ;
  }

 void accept_stud(stud *ptr)
 {
  for( int i=0 ;i<5 ; i++)
  { 
    printf(" 1.Enter roll no \n");
	scanf("%d",&ptr[i].rollno);
	printf("2. Enter name\n");
	scanf("%s",ptr[i].name);
    printf("3..Enter standard \n");
	scanf("%d",&ptr[i].std);
    printf("4. Enter marks\n");
    scanf("%f", &ptr[i].marks);
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




