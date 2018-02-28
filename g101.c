#include<stdio.h>
void main()
{
char s[10];
int n,i,l,q;
printf("enter the n and string");
scanf("%d",&n);
scanf("%s",&s);
l=strlen(s);
q=l-n;
for(i=q;i<n;i++)
{
printf("%c",s[i]);
}
}

