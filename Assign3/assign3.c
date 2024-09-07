#include<stdio.h>
#include<math.h>


int main()
{  
  while(1)

 {
  int num, arm=0, rev= 0 , sum =0,count = 0,temp ,rem;
  printf(" Enter a number :");
  scanf("%d" , &num );
  
  enum menu { EXIT , SUM , REV , PAL , ARM }ch;
  printf("0. Exit \n");
  printf("1. Sum of digits \n");
  printf("2. reverse of digit  \n");
  printf("3. palindrome  \n");
  printf("4. armstrong number \n");
  printf("5. Your Choice :");
  
  scanf("%d",&ch);
  temp = num ;

  switch(ch) 
  {
   case EXIT :
          printf(" You entered exit : ....");
		  break;
   case SUM :
          while (temp != 0)
		  {
		   rem = temp % 10;
		   sum = sum + rem ;
		   temp /= 10;
		   }
          printf(" Sum of digits of %d is %d ",num,sum);
		  break;
   case REV :
         temp = num;
         while(temp != 0)
		 {
		 rem = temp%10;
		 rev = rev*10+rem;
		 temp /= 10;
		 }
		 printf(" Reverse of a number %d is %d ",num,rev);
		 break;
   case PAL :
         temp = num;
		 rev = 0;
         while(temp !=0)
		 {
		  rem = temp % 10;
		  rev = (rev*10)+rem;
		  temp /= 10;
		  }
		  if (num == rev)
		  {
		  printf(" Given number %d is a plaindrome ");
          }
		  else 
		  { printf(" Given number is not a plaindrome:");
		  }
		  break;
	case ARM :
	      temp = num;
		  arm = 0;
		  count = 0;
	      while( temp != 0)
		  {
		  count ++;
		  temp= temp /10;
		  }
		  temp = num;
		  while(temp!=0)
		  {
		   rem = temp%10;
		   arm = arm + pow(rem,count);
		   temp = temp / 10 ;
		   }

		   if (num == arm )
		     printf(" Given number is armstrong\n");
			else 
			  printf(" given number is not a palindrome\n");
			break;

	default :
         	printf(" Invalid input");
			}

	char c ;
	printf(" continue or not : ");
	scanf("%*c%c" , &c);
	if (c=='n' || c=='N')
	{
	 break;
	 }
 }
return 0 ;

}
