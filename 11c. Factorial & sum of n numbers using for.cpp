#include<iostream>
using namespace std;
int main()
{
int number,i=1,prod=1,sum=0;
cout<<"Enter a number to print factorial & sum of numbers:\n";
cin>>number;
for(int i=1;i<=number;i++)
{
	sum=sum+i;
	prod=prod*i;
}
cout<<"\nThe sum of numbers till "<<number<<" is: "<<sum;
cout<<"\n\nThe factorial of "<< number<<" is: "<<prod;
return 0;
}
