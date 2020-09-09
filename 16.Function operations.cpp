#include<iostream>
using namespace std;
void add_of(int x, int y)
{
	cout<<"Addition is :"<<x+y<<endl;	
}
void sub_of(int x, int y)
{
	cout<<"Subtraction is :"<<x-y<<endl;	
}
void mul_of(int x, int y)
{
	cout<<"Multiplication is :"<<x*y<<endl;	
}
void div_of(int x, int y)
{
	cout<<"Division is :"<<(float)x/y<<endl;	
}
main()
{
	int a,b;
	cout<<"Enter 2 numbers: ";
	cin>>a>>b;
	add_of(a,b);
	sub_of(a,b);
	mul_of(a,b);
	div_of(a,b);
}

