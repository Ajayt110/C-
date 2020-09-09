#include<iostream>
using namespace std;
int main()
{
int number,i=1;
cout<<"Enter a number to print math table:\n";
cin>>number;
do
{
	cout<<i<<" * "<<number<<" = "<<number*i;
	cout<<"\n";
	i++;
}while(i<=10);
return 0;
}
