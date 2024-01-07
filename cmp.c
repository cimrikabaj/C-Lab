#include<stdio.h>
#include<conio.h>
void cmp(char[],char[]);
int main()
{
	char str1[100],str2[100];
	printf("enter any string:\n");
	gets(str1);
	gets(str2);
	cmp(str1,str2);
	if(str1==str2 && str2==str1)
	printf("the strings are equal");
	else
	printf("the strings are not equal");
	getch();
	return 0;
}
void cmp(char str1[],char str2[])
{
int i = 0;
  	while(Str1[i] == Str2[i])
  	{
  		if(Str1[i] == '\0' && Str2[i] == '\0')
	  		break;
		i++;
	}
	return Str1[i] - Str2[i];
}
