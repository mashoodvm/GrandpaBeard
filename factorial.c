#include<stdio.h>

main()
{
   int x;
  long int fact(int b);
  printf("Enter the number:");
  scanf("%d",&x);
 long int f=fact(x);
  printf("factorial=%li",f);
}

long int fact(int n)
{
 long int f=1;int i;
 if(n!=0)
 {
  for(i=1;1<=n;i++)
  
    f=f*i;
  
 }
 else
 return(f);
}

