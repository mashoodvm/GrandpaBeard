#include<stdio.h>
int n,t1,t2,t3,temp=0,count;
int fib(int t1,int t2);
main()
{
  printf("\nEnter the number of terms to be display:");
  scanf("%d",&n);
  t1=0;
  t2=1;
  printf("%d\t%d\t",t1,t2);
  count=2;
  temp=0;
  printf("\nseries\n");
 
  fib(t1,t2);
}
int fib(int t1,int t2)
{ 
  if(n>0)
  {
    
    t3=t1+t2;
    printf("%d\t",t3);
    
  }
    count++;
    temp=t1;
    t1=t2;
    t2=t3;
    
    fib(t1,t2);
  
}

