#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c,s,A;
	printf("enter the three sides of triangle");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	A=sqrt(s+(s-a)*(s-b)*(s-c));
	printf("the area of the triangle is=%d\n",a);
	getch();
}
