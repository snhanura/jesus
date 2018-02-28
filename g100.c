##include<stdio.h>
void main()
{
int n,n1,res=1;
scanf("%d",&n);
while(n!=0)
{
n1=n%10;
n=n/10;
res*=n1;
printf("result=%d",res);
}
}
