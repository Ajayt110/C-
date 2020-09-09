#include<iostream>
using namespace std;
main()
{
	int no_of,search,flag=0,i,j;
	int x[3][2]={{4,5},{7,8},{9,3}},y[3][2]={{2,6},{3,8},{1,2}},z[3][2];
	
	for(i=0;i<3;i++)
	{
	for(j=0;j<2;j++)
	{
		z[i][j]=x[i][j]+y[i][j];
	}
	}
	cout<<"\nThe final matrix is: ";
	for(i=0;i<3;i++)
	{
	for(j=0;j<2;j++)
	{
		cout<<z[i][j]<<",";
	}
			cout<<"  ";
	}
}
