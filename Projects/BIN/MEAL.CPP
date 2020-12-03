#include <iostream.h>
#include <conio.h>

int main ()
{
	clrscr();

	char a[20];
	cout<<"Name: \n";
	cin>>a;

	int b;
	cout<<"Student Number: \n";
	cin>>b;

	int c[20];
	cout<<"Meal Expenses/Day \n";

	int z;
	cout<<"Morning: ";
	cin>>z;
	cout<<"Your Morning is: "<<z<<endl;

	int x;
	cout<<"Lunch: ";
	cin>>x;
	cout<<"Your Lunch is: "<<x<<endl;

	int y;
	cout<<"Dinner: ";
	cin>>y;
	cout<<"Your Dinner is: "<<y<<endl;

	cout<<"Total Meal Expenses: "<<z+x+y<< '\n';
	getch();

	return 0;
}