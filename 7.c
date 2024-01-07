#include<stdio.h>
#include<conio.h>
int main()
{
	int n,first,last;
	printf("enter any number");
	scanf("%d",&n);
	first=n;
	last=n%10;
	while(first>=10)
	{
		first=first/10;
		}
		printf("the fist digit is%d",first);
		printf("the last digit is%d",last);
		getch();
		return 0;
}
