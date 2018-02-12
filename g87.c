# include<stdio.h>
void main()
{
int a,b,i,g;
printf("enter the numbers");
scanf(" %d%d",&a,&b);
for(i=0;i<=a&&i<=b;++i)
{
if((a%i==0)&&(b%i==0))
{
g=i;
}
}
printf("the gcd value is:%d",i);
}
