#include<stdio.h>
void main()
{
int n,n1,re;
scanf("%d",&n);
while(n!=0)
{
n1=n%10;
re=n1;
n=n/10;
printf("%d",re);
}}
