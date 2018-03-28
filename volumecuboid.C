#include<stdio.h>
int main()
{
int l,b,h,vol,TSA;
printf("\nEnter the length:");
scanf("%d",&l);
printf("\nEnter the breath:");
scanf("%d",&b);
printf("\nEnter the hight:");
scanf("%d",&h);
vol=l*b*h;
printf("\nThe volum of the cuboid is:%d",vol);
TSA=2*((l*b)+(b*h)+(h*l));
printf("\nTotal surface area is:%d",TSA);
return 0;
}
