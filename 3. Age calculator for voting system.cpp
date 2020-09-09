#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter age to check Eligible to vote : ";
	cin>>age;
	if(age>=18)
	cout<<"\nEligible to vote.\n";
	else
	cout<<"\nNot eligible to vote.\n";
	return 0;
}
