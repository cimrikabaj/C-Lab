#include<stdio.h>
#include<conio.h>
int main()
{
    int r, c,m,n,a[100][100], b[100][100], s[100][100], i, j;
    printf("Enter the number of rows and column of first matrix : ");
    scanf("%d%d", &r,&c);
    printf("Enter the number of row and column of second matrix  : ");
    scanf("%d%d", &m,&n);
    if(r==m && c==n)
    {
     printf("Enter element of first matrix:");
    for (i = 0; i < r;i++)
        for (j = 0; j < c;j++)
		 {
            scanf("%d", &a[i][j]);
        }
    printf("Enter element of second matrix:");
    for (i = 0; i < m;i++)
        for (j = 0; j < n;j++)
		 {
            scanf("%d", &b[i][j]);
        }
    for (i = 0; i < r;i++)
        for (j = 0; j < c;j++) 
		{
            s[i][j]+= a[i][j] + b[i][j];
        }
    printf("\nSum of two matrices: \n");
    for (i = 0; i < m;i++)
        for (j = 0; j < n;j++) 
		{
            printf("%d", s[i][j]);
        }
    }
        else 
        printf("error");
    return 0;
}

