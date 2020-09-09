#include<iostream>
#include<string.h>
using namespace std;
int fun_value(int num)
{
	cout<<"\nValue passed printing: "<<num;
	return 0;
}
void fun_pointer(int *x)
{
	cout<<"\nPointer passed printing: "<<*x;
}
void fun_array(char str[])
{
	cout<<"\nString passed printing: "<<str;
}
void fun_arr_ptr(char *str)
{
	cout<<"\nString passed printing: ";
	while(*str!='\0')
	{
	cout<<*str;
	str++;
	}
}
main()
{
	int num=100,*ptr=&num;
	char str[20],*sptr;
	strcpy(str,"Hello world_This is pointer!");
	sptr=str;
	fun_value(num);
	fun_pointer(ptr);
	fun_array(str);	
	fun_arr_ptr(sptr);
}
