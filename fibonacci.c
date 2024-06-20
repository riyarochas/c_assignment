#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,num1=0,num2=1,nexterm=0;
	clrscr();
	printf("Enter a positive number:");
	scanf("%d",&n);
	nexterm = num1+num2;
	while(nexterm<=n)
	{
		num1=num2;
		num2=nexterm;
		nexterm=num1+num2;
	}
	printf("The fibonacci series is: %d",nexterm);
	getch();
}
