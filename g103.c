#include<stdio.h>
void main()
{
char s[10];int i,l;
scanf("%s",&s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]>=97&&s[i]<=122)
{
s[i]=s[i]-32;
}
}
printf("%s",s);
}

