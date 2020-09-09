#include<iostream>
using namespace std;

	void b_search(int a[],int low, int high,int search)
	{
		int mid;
		mid=a[(low+high)/2];
		while(low<=high)
		{
		if(mid==search)
		{
			cout<<"\n\nSearch Element is found at position "<<(low+high)/2+1<<" in array after sorting.\n";	
			break;
		}
		else if(search<mid)
		{
			high=(low+high)/2-1;
			b_search(a,low,high,search);	
		}
		else if(search>mid)
		{
			low=(low+high)/2+1;
			b_search(a,low,high,search);	
		}
		}
	
	}
	void sorting(int a[],int el,int search)
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
		cout<<"\nAfter Sorting Array:";
		for(i=0;i<el;i++)
		cout<<a[i]<<" ";
		b_search(a,0,el,search);
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
		cout<<"\nEnter the search element: ";
		cin>>search;
	
	sorting(ar,el,search);
	return 0;
}
