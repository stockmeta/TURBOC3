#include <iostream.h>
#include <conio.h>

main()

{

	clrscr();
	float wplan,wsales,hours;
	cout<<"Press <ENTER> to Continue . . . .";
	cin.get();
	clrscr();
	cout<<"A Bicycle Sales Person is Offered a Choice Wage Plan:\n";
	cout<<"(1) A Straight Salary of 2000 Pesos Per Week.\n";
	cout<<"(2) 70 Pesos Per Hour for 40 Hours Plus a 10% Expected Weekly Sales.\n\n";
	cout<<"The Bicycle Sales Person Chosen: ";
	cin>>wplan;
	cin.ignore();
	if(wplan==1)
	{
	cout<<"A Straight Salary of 2000 Pesos Per Week.\n\n";
	cout<<"You've Chosen the Best Paying Plan! Thank You!";
	}
	if(wplan==2)
	{
	cout<<"70 Pesos Per Hour for 40 Hours Plus a 10% Expected Weekly Sales.\n\n";
	cout<<"Please Enter Weekly Sales: ";
	cin>>wsales;
	cout<<"Please Enter Number of Hours: ";
	cin>>hours;
	cin.ignore();
	cout<<"\n\nThe Bicycle Sales Person Salary is "<<(70*hours)+(wsales*0.1);
	cout<<"\n\nYou've Chosen the Best Paying Plan! Thank You!";

	}
	if(wplan<=0)
	{
	cout<<"Error!";
	}
	if(wplan>=3)
	{
	cout<<"Error!";
	}
	cin.get();
	return 0;

}