#include<stdio.h>
int main()
{
char a[10];
int i,n=5;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if((a[i]=='0')||(a[i]=='1'))
{
printf("yes");
}
else
{
printf("no");
}
}return 0;
}
