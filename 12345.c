#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	int sp=0;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=sp;j++)
		{
		printf(" ");
	}
	for(j=1;j<=1;j++)
	{
		printf("%d",j);
	}
	for(j=i-11;j>=1;j--)
	{
		printf("%d",j);
	}
	}
printf("\n");
sp++;
getch();
return 0;
}
