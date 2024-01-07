#include<stdio.h>
#include<conio.h>
#define pi 3.1414
int main()
{
	int r;
	float c,a;
	printf("enter the value of redius of a circle:\n");
	scanf("%d",&r);
	c=2*pi*r;
	a=pi*r*r;
	printf("the circumference of a circle=%f\n the area of circle=%g",c,a);
	getch();
}
