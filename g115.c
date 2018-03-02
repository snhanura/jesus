#include<stdio.h>
void main()
{
int n,k,a[10],i,l,count=0;
printf("enter the limit and number");
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
l=a[0];
for(i=1;i<=n;i++)
{
if(a[i]<l)
{
l=a[i];
count++;
if(count==k)
{
printf("%d",l);
}
}
}
}
