#include<stdio.h>
void main()
{
int n,flag=0;
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(i%n==0)
{
flag++;
}}
if(flag==2)
{
printf("prime number=%d",n);
}
else
{
printf("composite number=%d",n);
}
}
