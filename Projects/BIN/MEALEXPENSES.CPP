#include <iostream.h>
#include <conio.h>

int main ()
{
	clrscr();

	char a[20];
	cout<<"Student Name: \n";
	cin>>a;

	int b;
	cout<<"Student Number: \n";
	cin>>b;

	int c[20];
	cout<<"Meal Expenses/Day \n";

	int z;
	cout<<"Morning: ";
	cin>>z;

	int x;
	cout<<"Lunch: ";
	cin>>x;

	int y;
	cout<<"Dinner: ";
	cin>>y;

	cout<<"Total Meal Expenses: "<<z+x+y<< '\n';
	getch();

	return 0;
}