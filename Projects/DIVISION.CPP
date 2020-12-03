#include <stdio.h>
#include <conio.h>

void main()
{
	int a, b, c;
	clrscr();
	printf("Enter two numbers to divide:\n");
	scanf("%d%d", &a, &b);
	c = a / b;
	printf("The quotient is %d\n",c);
	getch();
}