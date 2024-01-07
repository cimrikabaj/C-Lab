#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n=1,sum=0;
    while(n<=10)
    {
    	sum=sum+n*n;
    	n++;
	}
	printf("the sum is %d",sum);
	getch();
	return 0;
}
