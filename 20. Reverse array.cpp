#include<iostream>
using namespace std;
main()
{
	int a[]={87,72,65,54,95,90,80,61,73,81,97,100},b[13],i;
	cout<<"First Array:\n";
	for(i=0;i<12;i++)
	cout<<a[i]<<" ";
	cout<<"\n";
	for(i=0;i<12;i++)
	{
		b[11-i]=a[i];
	}
	cout<<"\nSecond Reverse Array:\n";
	for(i=0;i<12;i++)
	cout<<b[i]<<" ";
	cout<<"\n";
	
}
