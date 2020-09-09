#include<iostream>
using namespace std;
int main()
{
int y;
cout<<"Enter a year to calculate leap year:\n";
cin>>y;
	if(y%4==0 && y%100!=0 || y%400==0)
	cout<<y<<" is Leap Year";
	else
	cout<<y<<" is not Leap Year";
	return 0;
}
