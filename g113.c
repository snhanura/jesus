#include<stdio.h>
void main()
{
int n,k,s[10],count=0,i;
scanf("%d%d",&n,&k);
printf("enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",s[i]);
if(s[i]==k)
{
count++;
}
}
printf("%d",count);
}
