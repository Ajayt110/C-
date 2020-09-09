#include<iostream>
using namespace std;
int main()
{
int number;
cout<<"Enter a number to print math table:\n";
cin>>number;
for(int i=1;i<=10;i++)
{
	cout<<i<<" * "<<number<<" = "<<number*i;
	cout<<"\n";
}
return 0;
}
