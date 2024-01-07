#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
       int lower, upper;
       printf("Enter a Lower Character to Convert Uppercase : ");
       lower = getchar();
       upper = toupper(lower);
       putchar(upper);
       getch();
}
