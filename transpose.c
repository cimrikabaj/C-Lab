#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50][50],i,j,r,c,b[50][50];
	printf("enter the value of row and column");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		printf("enter the value of row %d",i+j);
		for(j=0;j<r;j++)
		{
			scanf("%d",&a[i][j]);
			b[j][i]=a[i][j];
		}
		}
		for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			{
				printf("%d",b[i][j]);
			}
			printf("\n");
		}
	getch();
	return 0;
}
