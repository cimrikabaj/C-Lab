#include<stdio.h>
#include<conio.h>
int sum(int n);
int main()
{
	int num;
	printf("enter any number:");
	scanf("%d",&num);
	printf("the sum of the number is %d",sum(num));
	getch();
	return 0;
}
int sum(int n)
{
	if(n<=9)
	return n;
	else
	return (n%10+sum(n/10));
	}

