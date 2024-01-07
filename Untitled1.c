#include<stdio.h>
#include<conio.h>
int main()
{
	float f,c;
	printf("enter temperature in fahrenheit");
	scanf("%f",&f);
	c=(f-32)*0.566;
	printf("the temperature in celcius%f",c);
	getch();
	return 0;
}
