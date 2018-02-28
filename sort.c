#include<stdio.h>
#include<string.h>
 extern void sort(char a[2][2],int n);
main()
{
int i,j,n=0;
char a[2][2];
do
{
scanf("%s",a[n]);
}
while(strcmp(a[n++],"END"));
sort(a,n);
for(i=0;i<n;i++)
printf("%s",a[i]);
}
void sort(char a[2][2],int n)
{
char t[2];
int i,j;
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(strcmp(a[i],a[j])>0)
{
strcpy(t[2],a[i]);
strcpy(a[i],a[j]);
strcpy(a[j],t[2]);
}
}
