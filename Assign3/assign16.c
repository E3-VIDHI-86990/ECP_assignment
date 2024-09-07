#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main ()
{  
 int count = 0,randnum ,usernum  ;
  srand(time(NULL));
  randnum = rand();

  printf("Heyy lets play a game named guessing number ");
 
  while(1)
  {
  count = count +1;
   printf(" Enter you gussed number : ");
   scanf("%d", &usernum);

   if ( randnum == usernum)
    {
	  printf("Congrats you won you guessed it right ");
      break;
	}
	else if ( randnum >= usernum) 
	{
	 printf(" try greater one . try again ! ");
	 }
	else if (usernum >= randnum)
	 {
	  printf(" try smaller one . try again !");
       }
	 
	 if (count ==10)
	 {
	 printf(" your attemps are over ");
	 break;
	 }
  }
return 0;
	}

