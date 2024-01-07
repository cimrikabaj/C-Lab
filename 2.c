#include<stdio.h>
#include<conio.h>
#include<string.h>
int length(char[]);
int main()
{
int len;
char a[80];
puts("enter any character:");
gets(a);
len=length(a);
printf("the length of the string=%d",len);
getch();
return 0;
}
int length(char a[])
{
	int i,count=0;
	for(i=0;a[i]!='\0';i++)
	{
		count++;
	}
	getch();
	return 0;
}
