#include<iostream>
using namespace std;
main(int argc, char *argv[])
{
	int a=10,b=20;
	char str[10]="Im_Ajay";
	for(int i=0;i<argc;i++)
	{
		cout<<"Index:   "<<i<<" \nValue is:   "<<argv[i];	
	}	
}
