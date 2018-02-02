#include<stdio.h>
int main()
{
int a=0,b=1,i,c,n=7;
printf("%d\t%d",a,b);
for(i=0;i<n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d\t",c);
}
return 0;
}
