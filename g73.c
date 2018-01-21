#include<stdio.h>
int main()
{
int n,l,r;
scanf("%d",&n);
scanf("%d%d",&l,&r);
if((l<n)&&(n<r))
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
