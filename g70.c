#include<stdio.h>
#include<math.h>
void main()
{
int a,b,i;
scanf("%d",&a);
for(i=0;i<((a/2)+1);i++)
{
b=pow(2,i);
if(a<b)
{
printf("the nearest power is %d",b);
}
}
}
