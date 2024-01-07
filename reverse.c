#include <stdio.h>
#include<conio.h>
#include <string.h>
void rev(char[],int,int);
int main()
{
   char str[100];
   printf("enter any string:\n");
   gets(str);
   rev(str,0,strlen(str)-1);
   printf("%s\n",str);
   getch();
   return 0;
}
void rev(char x[], int i, int j)
{
   char temp;
   if (i>=j)
    return;
    temp=x[i];
    x[i]=x[j];
    x[j]=temp;
    rev(x, ++i, --j);
}
