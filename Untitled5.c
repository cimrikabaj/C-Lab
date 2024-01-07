#include<stdio.h>
#include<conio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=100;i++)
	{
		if(i%5==0 && i%3!=0)
		{
			sum+=i;
				printf("the sum=%d",sum);
		}

		}
	
	

return 0;
}
