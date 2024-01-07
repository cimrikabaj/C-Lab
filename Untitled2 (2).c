#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float monthly,yearly,taxable;
	printf("enter your monthly income");
	scanf("%f",&monthly);
	yearly=monthly*12;
	if(yearly<=100000)
	printf("no taxable income\n");
	else if(yearly<=100000)
	printf("no taxable income\n");
	else if (yearly>100000 &&yearly<=175000)
	taxable=(yearly-100000)*0.15;
	else
	taxable=0.5*75000+(yearly-175000)*0.25;
	printf("your taxable amount is %f",taxable);
	getch();
}
