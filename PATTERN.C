#include<stdio.h>
#include<conio.h>

void main()
{
int i,j,num;
clrscr();
printf("enter till where you want to print pattern=");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
for(j=1;j<=i;j++){
printf("%d",j);
}
printf("\n");
}
getch();
}
