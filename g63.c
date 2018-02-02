#include<stdio.h>
int main()
{
char a[20];
int count=0,i;
scanf("%s",&a);
printf("%s",a);
for(i=0;i<=a;i++)
{
if(a[i]!=' ')
{
count++;
}
}
printf("%d",count);
}
