#include<stdio.h>
main()
{
 void prime(int num);
 int num;
 printf("enter the num");
 scanf("%d",&num);
 prime(num);
 }
 void prime(int num)
 int i,p=0;
 for(i=2;i<=num/2;i++)
 {
   if(num%i==0)
   {
     p=1;
     break;
   }
   }
   if(prime==0)
   {
   printf("%d is not a prime",num);
   }
   else
   {
     printf("%d is a prime",num);
   }
