#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],n,i;
	float c=0,s=0;
	printf("how many number do you have?:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d,&a[i]");
		if(a[i] %7==0 && a[i] %5!=0)
		{
			s+=a[i];
			c++;
		}
}
printf("sum is :%f and count is :%f",s,c);
getch();
return 0;
}
