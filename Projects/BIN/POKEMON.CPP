#include <iostream.h>

using_namespace_std();

int main()
{
	int a,b,c;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	cin.ignore();
	c=a+b;
	cout<<"thisisanumer"<<c<<"\n";
	cin.get();
	return 0;
}