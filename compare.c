#include <stdio.h>
#include<conio.h>
#include <string.h>
int cmp(char [], char []);
 int main()
{
  	char Str1[100], Str2[100];
  	int result;
    printf("Enter any String:\n");
  	gets(Str1);
  	gets(Str2);
  	result = cmp(Str1, Str2);
  	if(result < 0)
   	{
   		printf("str1 is Less than str2");
	}
	else if(result > 0)
   	{
   		printf("str2 is Less than str1");
	}
	else
   	{
   		printf("str1 is Equal to str2");
	}
  	getch();
  	return 0;
}
int cmp(char Str1[], char Str2[])
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
