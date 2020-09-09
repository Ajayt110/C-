#include<iostream>
using namespace std;
int main()
{
int num1,num2,option;
cout<<"Enter 2 numbers to calculate:\n";
cin>>num1>>num2;

cout<<"Select an operation to calculate\n";
cout<<" 1 for Addition.\n 2 for Subtraction.\n 3 for Multiplication.\n 4 for Division.\n 5 for Remainder operation.\n";
cout<<"Your Option : ";
cin>>option;
switch(option)
{
case 1:
	cout<<"\nAddition  of 2 numbers is: "<<num1+num2;
	break;
case 2:
	cout<<"\nSubtraction of 2 numbers is: "<<num1-num2;
	break;
case 3:
	cout<<"\nMultiplication of 2 numbers is: "<<num1*num2;
	break;
case 4:
	cout<<"\nDivision of 2 numbers is: "<<(float)num1/num2;
	break;
case 5:
	cout<<"\nRemainder of number 1 when divided by 2 is: "<<num1%num2;
	break;
default:
	cout<<"\nInvalid Option ";
}
return 0;
}
