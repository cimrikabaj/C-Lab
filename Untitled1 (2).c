#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("enter any positive integer");
	scanf("%d",&a);
	switch(a%2)
{
case 0:
	if(a%2==0)
	printf("the integer is even=%d\n",a);
	break;
case 1:
		if(a%2!=0)
	 printf("the interger is odd=%d\n",a);
	break;
	defult:
	printf("invalid");
}
getch();
}
