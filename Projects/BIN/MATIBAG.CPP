#include<iostream.h>
#include<conio.h>

int main ()

{
	textcolor(68);
	textbackground(15);
clrscr();
float a,b,c;

	cout <<"COST: \n";
	cin >>a;
	cout <<"\n";
	cout <<"\n";
	cout <<"ENTER YOUR PAYMENT HERE: \n";
	cin >>b;
	cout <<"\n";
	cout <<"\n";
	cout <<"WITH A DEDUCTION OF 6% UPON PAYMENT: \n";
	cout <<(0.06/100);"\n";
	cout <<endl;
	cout <<"\n";
	cout <<"\n";
	cout <<"TOTAL PAYMENT WITH AN INCREASE OF 6% OF TAX: \n";
	cout <<(a+0.6);
	cout <<endl;
	cout <<"\n";
	cout <<"YOUR CHANGE IS: \n";
	cout <<(b-a+0.6);
	cout <<endl;

	cout <<"\n";
	cout <<"\n";
	cout <<"\n";
	cout <<"\n";
	cout <<"Thank you for purchasing our product! Please come again \n";

	getch();
	return 0;
}
