#include<stdio.h>
#include<conio.h>
int main()
{
int N,n,i,pcount=0,ncount=0;
float psum=0,nsum=0,pavg,navg;
i=1;
do{
	printf("enter an integer:");
scanf("%d",&n);
if(n==0)
break;
if(n>0)
{
psum+=n;
pcount++;
}
else
{
nsum+=n;
ncount++;
i++;
}
}
while(1);
pavg=psum/pcount;
navg=nsum/ncount;
printf("average of positive number=%f",pavg);
printf("average of negative number=%f",navg);
getch();
return 0;
}
