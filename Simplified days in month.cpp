#include<iostream>
using namespace std;
main()
{
	int mo;
	cout<<"Enter a month: ";
	cin>>mo;
	if(mo>0&&mo<13)
	{
		if(mo==2)
		cout<<"\nMonth has 28 or 29(Leap Year) days. ";
		else if(mo<8 && mo%2!=0 || mo>=8 && mo%2==0)
		cout<<"\nMonth Has 31 Days.";
		else 
		cout<<"\nMonth Has 30 Days.";
	}
	else 
	cout<<"\nInvalid Month.";
}
