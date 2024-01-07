#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,d;
	printf("enter first interger:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	if(a>b)
	{
		d=a-b;
		printf("the largest number id %d and the difference is %d",a,d);
	}
	else
	{
		d=b-a;
	printf("the largest number is %d and the difference is %d",b,d);
}
	getch();
	return 0;
}
