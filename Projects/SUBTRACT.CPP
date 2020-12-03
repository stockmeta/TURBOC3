#include <stdio.h>
#include <conio.h>

void main()
{
	int a, b, c;
	clrscr();
	printf("Enter two numbers to subtract:\n");
	scanf("%d%d", &a, &b, &c);
	c = a - b;
	printf("The product is %d\n", c);
	getch();
}