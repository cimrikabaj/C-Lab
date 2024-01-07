#include<stdio.h>
#include<conio.h>
int main()
{
	int i,rem,n;
	printf("enter any number:\n");
	scanf("%d",&n);
	i=2;
	rem=n%i;
	if(rem=0)
	{
	printf("n is not a prime number");
	}
	else (rem=n-1)
	{
	printf("n is a prime number");
    }
	getch();
	return ;
	
}
