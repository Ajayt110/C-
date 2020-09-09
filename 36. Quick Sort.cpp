#include<iostream>
using namespace std;
int partition_swap(int a[],int low,int high)
	{
	
		int pivot,i,j,t;
		pivot=a[low];
		i=low;
		j=high+1;
	do
    {
        do
        i++;
        while(a[i]<pivot && i<high);
        do
        j--;
        while(pivot<a[j] && j>-1);

        if(i<j)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }while(i<j);

    a[low]=a[j];
    a[j]=pivot;

    return(j);
	
	}

void Q_sorting(int a[],int low,int high)
	{
		int pivot_pos;
		if(low<high)
		{
		pivot_pos=partition_swap(a,low,high);
		Q_sorting(a,pivot_pos+1,high);
		Q_sorting(a,low,pivot_pos-1);
		}
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
	Q_sorting(ar,0,el-1);
		cout<<"\nAfter Sorting Array: ";
		for(i=0;i<el;i++)
		cout<<ar[i]<<" ";
	return 0;
}
