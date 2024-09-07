   #include<stdio.h>
   
   int main()
   {
   int num , count = 0 , i , j, prime;
     printf(" Enter number ");
     scanf("%d",&num);
   
     num++;
    while(count<5)
    { prime = 1;
 
      for(i =2 ; i<= num/2;i++)
       { if(num%i == 0)
         {
          prime = 0;
           break ;
           }
          }
      if (prime ==1)
      { printf("%d",num);
      count ++;
      }
     num++;
      }
 return 0;
 }
    
