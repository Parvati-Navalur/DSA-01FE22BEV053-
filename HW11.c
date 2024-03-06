#include<stdio.h>
void main()
{
  int i,n1,n2,count=0;
  void even(int n1,int n2);
  printf("enter value of n1,n2\n");
  scanf("%d%d",&n1,&n2);
  even(n1,n2);

}
void even(int n1,int n2)
{
    int i,count=0;
 for(i=n1;i<=n2;i++)

{
 if(i%2==0)
  {

  count=count+i;
  }
  else
  {


    count=count+i;
  }
}

}




