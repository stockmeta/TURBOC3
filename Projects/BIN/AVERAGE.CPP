#include <iostream.h>
#include <conio.h>

int main ()
{
	clrscr();

	cout<<"\n";
	cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> AVERAGE <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n";

	char a[20];
	std:cout<<"Student Name: \n";
	cin>>a;
	cin.getline (a,20);
	cout<<"\n";


	int b;
	cout<<"Student Number: \n";
	cin>>b;
	cin.ignore();
	cout<<"\n";

	cout<<"\n";
	cout<<"\n";
	char c[20];
	cout<<">.AVERAGE.< \n";

	cout<<"\n";
	int z;
	cout<<"Prelim: ";
	cin>>z;

	int x;
	cout<<"Midterm: ";
	cin>>x;

	int y;
	cout<<"Finals: ";
	cin>>y;
	cout<<"\n";


	cout<<"\n";
	cout<<">>.Total Grade.<<\n";
	cout<<"\n";
	cout<<"Your Prelim is:"<<z<<endl;
	cout<<"Your Midterm is:"<<x<<endl;
	cout<<"Your Finals is:"<<y<<endl;
	cout<<"\n";
	int sum=z+x+y;
	cout<<"Total Grade: "<<z+x+y<< '\n';

	cout<<"Total Average:"<<sum/3<<"\n";
	getch ();


	clrscr ();
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"                           >>>  CONGRATULATIONS!! <<<\n";

	getch();
	return 0;
}