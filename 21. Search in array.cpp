#include<iostream>
using namespace std;
main()
{
	int no_of,search,flag=0;
	cout<<"Enter number of elements in array: ";
	cin>>no_of;
	int a[no_of],b[no_of],i;
	cout<<"Enter array elements:\n";
	for(i=0;i<no_of;i++)
	cin>>a[i];
	cout<<"\n";
	cout<<"Enter search element:\n";
	cin>>search;
	for(i=0;i<no_of;i++)
	{
		if(search==a[i])
		flag=1;
	}
	if(flag==1)
	cout<<"\nValue found in an array.\n";
	else
	cout<<"\nValue found in an array.\n";
	
}
