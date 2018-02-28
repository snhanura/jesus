#include<stdio.h>
void main()
{
int s=0,i,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
s=i+s;
}
printf("%d",s);
}
