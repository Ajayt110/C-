#include<iostream>
using namespace std;
int main()
{
int num1,num2,num3;
cout<<"Enter 3 numbers:\n";
cin>>num1>>num2>>num3;
if(num1>num2)
{
if(num1>num3)
cout<<"\nNumber "<<num1<<" is greater";
else
cout<<"\nNumber "<<num3<<" is greater";
}
else 
{
if(num2>num3)
cout<<"\nNumber "<<num2<<" is greater";
else
cout<<"\nNumber "<<num3<<" is greater";
}
return 0;
}
