//Program to Print the First N Tables.
#include<stdio.h>
#include<conio.h>
main()
{
int n,i,j,m;
clrscr();
printf("Enter the Value of n = ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\nTable of %d is= ",i);
for(j=1;j<=10;j++)
{
m=i*j;
printf("\n%d * %d = %d",i,j,m);
}
getche();
}
getche();
}