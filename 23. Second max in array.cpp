#include<iostream>
using namespace std;
main()
{
	int i,m,sm,len;
	cout<<"enter length of array\n";
	cin>>len;
	int a[len];
	cout<<"enter "<<len<<" elements\n";
	for(i=0;i<len;i++)
	{
	cin>>a[i];
	if(i==0)
	{
	m=a[0];
	sm=a[0];
	}
	if(a[i]>m)
	{
		sm=m;
		m=a[i];
	}
	else if(a[i]>sm && a[i]!=m) 
    sm=a[i]; 
	}
	cout<<"max of array is "<<m<<"\n";
	cout<<"second max of array is "<<sm<<"\n";
}
