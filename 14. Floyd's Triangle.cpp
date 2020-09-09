#include<iostream>
using namespace std;
int main()
{
int number,i=1,j=1;
cout<<"Enter a number to print triangle:\n";
cin>>number;
cout<<"\n";
while(i<=number)
{
	while(j<=i)
	{
		cout<<j;
		j++;
	}
	cout<<"\n";
	i++;
	j=1;
}
cout<<"\n";
for(i=number;i>=1;i--)
{
	for(j=i;j>=1;j--)
	{
		cout<<j;
	}
		cout<<"\n";	
}
cout<<"\n";
for(i=j+1;i<=number;i++)
{
	for(j=i;j<=number;j++)
	{
		cout<<j;
	}
		cout<<"\n";	
}
cout<<"\n";
for(i=1;i<=number;i++)
{
	for(j=1;j<=i;j++)
	{
		cout<<i;
	}
		cout<<"\n";	
}
cout<<"\n";
for(i=number;i>=1;i--)
{
	for(j=number;j>=i;j--)
	{
		cout<<i;
	}
		cout<<"\n";	
}
return 0;
}

