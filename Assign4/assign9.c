   #include<stdio.h>
  
   void prime_no(int n);
   void range(int min , int max);
   int main ()
   {
     int n ;
	 int min , max;
     printf(" Enter a number ");
     scanf("%d",&n);
    printf(" Enter min and max range for printing prime number :");
    scanf("%d%d", &min ,&max);
    prime_no(n);
    range(min,max);
    return 0 ;
    }
  
   void prime_no(int n )
   {
    int i, count =1 ;
     for ( i=2;i<=n;i++)
     {
      if (n%i == 0)
       count ++ ;
      }
 
   if ( count ==2 )
    {
    printf(" Entered number is a prime number\n ");
    }
    else
    {
      printf("Enetered is not a prime number\n ");
      }
  
      }
  
    
	void range(int min , int max)
  
  {
     int i, j, count = 1 ,flag;
     for ( i = min ;i<=max ;i++)
    {
       if (i == 0 || i == 1)
      { continue;
       }
 
      flag = 1 ;
      for(j=2 ; j<= i/2 ; ++j)
   {
        if ( i % j ==0)
        {
         flag = 0 ;
         break ;
        }
         }
  
       if (flag == 1)
        {
        printf("%d",i);
         }
       }
  
     }
  
  
