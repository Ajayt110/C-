#include<iostream>
using namespace std;
void display(int x, int y,int opt)
{
	if(opt==0)
	cout<<x<<" is greater!";
	else if(opt==1)
	cout<<y<<" is greater!";
	else
	cout<<"Both are equal!";
}
void greater_of(int x, int y)
{
	if(x>y)
	display(x,y,0);
	else if(x<y)
	display(x,y,1);
	else
	display(x,y,2);
}
void input()
{
	int a,b;
	cout<<"Enter 2 numbers: ";
	cin>>a>>b;
	cout<<"\n\n";
	greater_of(a,b);
}
main()
{
	input();
}
