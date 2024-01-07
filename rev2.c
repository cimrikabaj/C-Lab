#include <stdio.h>
#include<conio.h>
#include <string.h>
void rev(char [], int, int);
int main()
{
  	char Str[100], temp;
  	int i, j, len;
    printf("Enter any String:\n");
  	gets(Str);
  	len=strlen(Str);
  	rev(Str,0,len -1);
    printf("String after Reversing = %s", Str);
  	getch();
  	return 0;
}
void rev(char Str[], int i, int len)
{
	char temp;
	temp = Str[i];
	Str[i] = Str[len - i];
	Str[len - i] = temp;
	
  	if (i == len/2)
  	{
		return;
  	}
  	rev(Str,i + 1, len);
}
