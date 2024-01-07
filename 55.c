#include<stdio.h>
#include<conio.h>
int sum(int,int);
int main()
{
	int a,b,c;
	printf("enter any two number\t");
	scanf("%d%d",&a,&b);
	c= sum(a,b);
	printf("the sum=%d",c);
	getch();
	return 0;
}
int sum (int a,int b)
{
	int c=a+b;
	return c;
}
