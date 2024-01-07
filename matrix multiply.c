#include<stdio.h>
#include<conio.h>
int main()
{
	int m,n,p,q,k,i,j,a[20][20],b[20][20],c[40][40];
	printf("enter row and column of first matrix:\n");
	scanf("%d%d",&m,&n);
	printf("enter row and column of second matrix:\n");
	scanf("%d%d",&p,&q);
	printf("enter elements of first matrix\n");
	scanf("%d",&a[i][j]);
	printf("enter elements for second matrix\n");
	scanf("%d",&b[i][j]);
	if(n==p)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				c[i][j]=0;
				for(k=0;k<n;k++)
				{
				c[i][j]+=a[i][j]*b[i][j];
			}
		}
	}
		printf("the multiplication=%d",c[i][j]);

}
else 
printf("error");
	getch();
	return 0;
	}
