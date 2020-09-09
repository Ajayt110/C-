#include<iostream>
using namespace std;
int main()
{
int num,i;
cout<<"Enter a number to give FizBiz:\n";
cin>>num;
for(i=1;i<=num;i++)
{
	if(i%3==0 | i%5==0)
	{
	if(i%3==0 & i%5!=0)
	cout<<"Fiz\n";
	else if(i%3!=0 & i%5==0)
	cout<<"Biz\n";
	else
	cout<<"FizBiz\n";
	}
	else
	cout<<i<<"\n";
}
return 0;
}
