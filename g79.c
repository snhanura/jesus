#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter 2 numbers");
scanf("%d\t%d",&a,&b);
if((a!=0)&&(b!=0))
{
c=a*b;
for(i=0;i<=a;i++)
{
  if(c==(i*i))
  {
    printf("It is a Square");
  }
  else
  {
    printf("It is not a square");
  }
}
