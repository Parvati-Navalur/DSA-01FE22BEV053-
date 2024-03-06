#include<stdio.h>
main()
{
 int i,n,f1=0,f2=1,f3;
 printf("enter the number");
 scanf("%d",&n);


 if(i==1)
 {
 printf("%d ",f1);
 }
 else if(i==2)
 {
 printf("%d%d ",f1,f2);
 }
  else

  printf("%d%d ",f1,f2);
  i=3;
  while(i<=n)
  {
    f3=f1+f2;
    printf("%d ",f3);
    f1=f2;
    f2=f3;
    i++;
    }
    }
