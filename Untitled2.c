#include<stdio.h>
#include<conio.h>
int main()
{
	int n,pcount=0,ncount=0;
	float psum=0,nsum=0,pavg,navg;
	while(1)
	{
		printf("enter an integer");
		scanf("%d",&n);
		if(n==0)
		break;
		if(n>0)
		{
			psum+=n;
			pcount++;
		}
		else
		{
			nsum+=n;
			ncount++;
		}
	}
	pavg=psum/pcount;
	navg=nsum/ncount;
	printf("average of positive=%f",pavg);
	printf("average of negative=%f",navg);
	getch();
	return 0;
	
}
