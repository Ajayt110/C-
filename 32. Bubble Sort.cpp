#include<iostream>
using namespace std;
void sorting(int a[],int el)
	{
		int i,j,t;
		for(i=0;i<el;i++)
		{
			for(j=i+1;j<el;j++)
			{
				if(a[i]>a[j])
				{
					t=a[j];
					a[j]=a[i];
					a[i]=t;	
				}
			}
		}
		cout<<"\nAfter Sorting Array: ";
		for(i=0;i<el;i++)
		cout<<a[i]<<" ";
		
	}

int main()
{
		int el,i,search;
		cout<<"\nEnter no of elements: ";
		cin>>el;
		int ar[el];
		cout<<"\nEnter array elements:\n";
		for(i=0;i<el;i++ )
		{
			cin>>ar[i];	
		}
	sorting(ar,el);
	return 0;
}
