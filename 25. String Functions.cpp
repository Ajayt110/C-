#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int x;
	char str1[10],str2[10],str3[20];
	strcpy(str1,"String One ");
	strcpy(str2,"String Two");
	cout<<"\nFirst string is: "<<str1<<" and its length is: "<<strlen(str1);
	cout<<"\nSecond string is: "<<str2<<" and its length is: "<<strlen(str2);
	strcpy(str3,strcat(str1,str2));
	cout<<"\nMerged string is: "<<str3<<" and its length is: "<<strlen(str3);
	x=strcmp(str1,str2);
	if(x==1)
	cout<<"\nString 1 is greater.";
	else if(x==-1)
	cout<<"\nString 2 is greater.";
	else
	cout<<"\nString 1 & string 2 are equal.";
	fflush(stdin);
	cout<<"\nUpper case of string three is: "<<strupr(str3);
	cout<<"\nLower case of string two is: "<<strlwr(str2);
	cout<<"\nSubstring of string three is: "<<strstr(str3,"One");

	
}
