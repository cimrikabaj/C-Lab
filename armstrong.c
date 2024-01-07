#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,num;
	printf("enter num:");
	scanf("%d",&num);
	a=num/100;
	b=(num%100)%10;
	c=num%10;
	if((a*a*a)+(b*b*b)+(c*c*c)==num)
	printf("%d is armstrong",num);
	else 
	printf("%d is not armstrong",num);
	getch();
	return 0;
}
