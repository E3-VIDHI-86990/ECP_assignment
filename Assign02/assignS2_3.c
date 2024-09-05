#include<stdio.h>

int main()
{
 int Dept_no , Employee_ID;
 char Designation ;
 printf("Enter Dept_no: 10,20,30,40 \n Employee_ID: 101,102,103,104 \n Designation 'M','S','s','C' ");
 scanf("%d%d%c",&Dept_no,&Employee_ID,&Designation);

 switch(Dept_no)
 { 
  case 10 : printf(" Employee with id  %d working in marketing department as manager\n ",Employee_ID);
          break;
  case 20 : printf(" Employee with id  %d working in management department as supervisor\n ",Employee_ID);
          break;
  case 30 : printf(" Employee with id  %d working in sales department as security officer\n ",Employee_ID);
         break;
  case 40 : printf(" Employee with id  %d working in designing department as clerk\n ",Employee_ID);
          break;
   default: printf(" invalid input");
          break; 

 }
  switch (Designation)
  {
   case 'M' : printf(" as a manager\n ");
             break;
   case 'S' : printf(" as a supervisor \n ");
             break;
   case 's' : printf(" as a security officer\n ");
             break;
   case 'C' : printf(" as a clerk\n ");
             break;
  default: printf("invalid input");
               break;
  }

 switch(Employee_ID)
 {
  case 101 : printf(" Employee with id  %d working in marketing department as manager\n ",Employee_ID);
             break;
  case 102 : printf(" Employee with id  %d working in Managemnt  department as supervisor \n",Employee_ID);
             break;
  case 103 : printf(" Employee with id  %d working in Sales  department as security officer\n ",Employee_ID);
             break;
  case 104 : printf(" Employee with id  %d working in Designing  department as clerk\n ",Employee_ID);
            break;
  default : printf(" invalid input");
           break;
  }


 return 0 ;

 }
