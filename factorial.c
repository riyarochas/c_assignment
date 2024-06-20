#include<stdio.h>
#include<conio.h>
int fact(int n)
{
	if(n==0)
		return 1;
	else
		return(fact(n-1)*n);
}
void main()
{
	int num,f;
	clrscr();
	printf("Enter number to find the factorial of:");
	scanf("%d",&num);
	f=fact(num);
	printf("Factorial = %d",f);
	getch();
}
