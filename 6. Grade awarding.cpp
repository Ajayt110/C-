#include<iostream>
using namespace std;
int main()
{
int mark;
cout<<"Enter mark to award a grade : ";
cin>>mark;
if(mark<0 | mark>100)
	cout<<"\nInvalid mark.Please enter between 1-100.";
else
{
	if(mark>=80)	
	cout<<"\nAwarded grade is Excellent.";
	else if(mark>=70 & mark<80)	
	cout<<"\nAwarded grade is Good.";
	else if(mark>=60 & mark<70)	
	cout<<"\nAwarded grade is Fair.";	
	else if(mark>=50 & mark<60)	
	cout<<"\nAwarded grade is Average.";
	else	
	cout<<"\nAwarded grade is Poor.";
}
return 0;
}
