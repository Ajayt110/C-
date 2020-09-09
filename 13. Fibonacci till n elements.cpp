#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,no_of,i;
	cout<<"Enter number of elements to be printed in fibonacci : ";
	cin>>no_of;
	cout<<"\nFibonacci series till "<<no_of<<" elements is.\n";
	cout<<a<<" "<<b;
	for(i=2;i<no_of;i++)
	{
		b=a+b;
		a=b-a;
		cout<<" "<<b;
	}
	return 0;
}
