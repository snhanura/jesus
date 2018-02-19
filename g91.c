#include<stdio.h>
void main()
{
float l,w,h,v,sa;
printf("enter the l,w,h);
scanf("%f",&l);
scanf("%f",&w);
scanf("%f",&h);
v=l*w*h;
sa=2*l*w+2*w*h+2*h*l;
printf(" volume=%f,TSA=%f",v,sa);
}
