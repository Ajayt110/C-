#include<iostream>
using namespace std;
int main()
{
char bank;
cout<<"Enter option to print bank transaction : ";
cin>>bank;
switch (bank)
{
	case 'W':
		cout<<"\nWithdrawl";
		break;
	case 'S':
		cout<<"\nMini Statement.";
		break;
	case 'P':
		cout<<"\nPin Change.";
		break;
	case 'T':
		cout<<"\nAccount Transfer.";
		break;
	default:
		cout<<"\nInvalid Option.";
}
	/*if(bank=='W')	
	cout<<"\nWithdrawl";
	else if(bank=='S')	
	cout<<"\nMini Statement.";
	else if(bank=='P')	
	cout<<"\nPin Change.";	
	else if(bank=='T')	
	cout<<"\nAccount Transfer.";
	else	
	cout<<"\nInvalid Option.";*/
return 0;
}

