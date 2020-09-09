#include<iostream>
using namespace std;
int main()
{
int num1,num2;
cout<<"Enter 2 numbers to swap:\n";
cin>>num1>>num2;
cout<<"\nNumbers before swap are: "<<num1<<" "<<num2;
num1=num1+num2; 
num2=num1-num2;  
num1=num1-num2;
cout<<"\n\nNumbers after swap are: "<<num1<<" "<<num2;
return 0;
}
