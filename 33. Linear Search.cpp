#include<iostream>
using namespace std;
int main()
{
		int el,i,search,flag=0;
		cout<<"\nEnter no of elements: ";
		cin>>el;
		int ar[el];
		cout<<"\nEnter array elements:\n";
		for(i=0;i<el;i++ )
		{
			cin>>ar[i];	
		}
		cout<<"\nEnter the search element: ";
		cin>>search;
		for(i=0;i<el;i++)
		{
			if(search==ar[i])
			{
			cout<<"\n\nSearch Element is found at position "<<i+1<<" in array.\n";	
			flag=1;
			break;
			}
		}
		if(flag==0)
		{
		cout<<"\n\nSearch Element is not found in array.\n";	
		}
	return 0;
}
