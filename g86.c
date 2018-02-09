#include<stdio.h>
void main()
{
char s[20];
int i,flag;
scanf("%s",&s);
for(i=0;s[i]!=0;i++)
{
if(s[i]==s[i+1])
{
flag=1;
}
}
if(flag==1)
{
printf("no");
}
else
{
printf("yes");
}
}
