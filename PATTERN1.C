#include<stdio.h>
#include<conio.h>

void main()
{
int num,i,j;
clrscr();
printf("enter value=");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
for(j=num;j>=i;j--)
{
printf("h");
}
printf("\n");
}
getch();
}