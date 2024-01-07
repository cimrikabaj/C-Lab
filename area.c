#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float s,area;
	printf("enter the value of a,b and c");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)*0.5;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("the area of triangle %f",area);
	getch();
	return 0;
}
