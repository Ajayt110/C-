#include<iostream>
#include<string.h>
using namespace std;
main(int argc, char *argv[])
{
	int a=10,b=20;
	char str[10],str2[10];
	strcpy(str,"Im_Ajay");
	strcpy(str2,"Im_Awesome");
	//strcpy(*argv,"Im_Awesome");
	for(int i=0;i<argc;i++)
	{
		cout<<"\nIndex: "<<i<<" \nValue is:   "<<argv[i];	
	}	
}
