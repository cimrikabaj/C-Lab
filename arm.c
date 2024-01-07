#include<stdio.h>
#include<conio.h>
int main()
{
	int n,temp1,temp2,armstrong,rem,count;
	printf("enter any number:");
	scanf("%d",&n);
	temp1=n;
	temp2=n;
	while(temp1!=0)
	{
		count++;
		temp1=temp1/10;
	}
	while(temp2!=0)
	{
		rem=temp2%10;
		armstrong+=pow (rem,count);
		temp2=temp2/10;
	}
	if(armstrong==n)
	{
	    printf("%d is an armstrong number",n);
		else
		printf("%d is not an armstrong number",n);
	}
	getch();
	return 0;

}
