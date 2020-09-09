#include<iostream>
using namespace std;
main()
{
	int a[]={87,72,65,54,95,90,80,61,73,81,97,100},i,max,min,sum=0;
	for(i=0;i<12;i++)
	{
		if(a[i]%2==0)
		cout<<a[i]<<" is even number.\n";
		else
		cout<<a[i]<<" is odd number.\n";
	}

}
