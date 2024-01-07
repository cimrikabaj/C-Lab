#include <stdio.h>

int main()
{
  int year;

  printf("\n Please Enter any year you wish \n");
  scanf("%d",&year);
  
  if(year%4 == 0)
   {
    if( year%100 == 0) 
     {
      if ( year%400 == 0)
         printf("\n&nbsp;%d is a Leap Year.", year);
      else
         printf("\n&nbsp;%d is not the Leap Year.", year);
     }
    else
       printf("\n&nbsp;%d is a Leap Year.", year );
   }
  else
     printf("\n&nbsp;%d is not the Leap Year.", year);
 return 0;
}

