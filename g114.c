#include<stdio.h>
void main()
{
int n,k,a[10];
printf("enter the limt and number");
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]/2!=0)
{
count++;
if(count==k)
{
printf("%d",a[i]);
}
}
}
}
