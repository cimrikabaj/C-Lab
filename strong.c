#include<stdio.h>
#include<conio.h>
void main()
{
	int num,a,b,c;
	printf("enter any number:");
	scanf("%d",&num);
	a=num/100;
	b=(num%100)/10;
	c=num%10;
	if(a*a*a+b*b*b+c*c*c==num)
	printf("%d is an armstrong",num);
	else
	printf("%d is not an armstrong number",num);
	getch();
	return 0;
}
