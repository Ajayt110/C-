#include<iostream>
using namespace std;
int main()
{
    int i,j,el,temp;
    cout<<"Enter the total number of elements:";
    cin>>el;
    int a[el];
    cout<<"\nEnter the elements:  ";
    
    for(i=0;i<el;i++)
        cin>>a[i];
        
    for(i=1;i<=el-1;i++)
    {
        temp=a[i];
        j=i-1;               
        while((temp<=a[j])&&(j>=0))       
        {
            a[j+1]=a[j]; 
            j--;
        }
        a[j+1]=temp;
    }

    cout<<"\nSorted array is: ";
    for(i=0;i<el;i++)
    {
        cout<<a[i]<<"  ";
    }


}
