#include<iostream>
using namespace std;
main()
{
	int a[]={87,72,65,54,95,90,80,61,73,81,97,100},i,max,min,sum=0;
	for(i=0;i<12;i++)
	sum=sum+a[i];
	max=a[0];
	min=a[0];
	for(i=1;i<12;i++)
	{
		if(max<a[i])
		max=a[i];
		if(min>a[i])
		min=a[i];		
	}
	cout<<sum<<" is the sum of elements in the array.\n";
	cout<<float(sum/12)<<" is the average of elements in the array.\n";
	cout<<min<<" is the minimum in the array.\n";	
	cout<<max<<" is the maximum in the array.\n";
}
