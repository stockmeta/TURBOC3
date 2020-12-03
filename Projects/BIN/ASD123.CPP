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
	cout <<"ENTER PAYMENT HERE: \n";
	cin >>b;
	cout <<"TOTAL INCREASE VIA 6% TAX: \n";
	cout <<((0.6/100)*a);"\n";


	cout <<" Thank you purchasing our product!! Please come again :) \n";


	char o[20];
	cout <<"TOTAL PAYMENT WITH AN INCREASE OF 6% OF TAX: \n";
	cout <<(a+9);
	cout <<o<<endl;

	char k[20];
	cout <<"YOUR CHANGE IS: \n";
	cout <<(b-a+9);
	cout <<k<<endl;



	getch();
	return 0;
}
