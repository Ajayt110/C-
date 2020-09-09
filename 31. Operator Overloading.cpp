#include<iostream>
using namespace std;
class O_Overload
{
	int a,b;
	public:
	O_Overload(int x,int y)
	{
		a=x;
		b=y;
	}
	void operator * ()
	{
		cout<<a*b;
	}	
	void operator + (O_Overload l)
	{
		cout<<"  "<<a+b + (l.a + l.b);
	}	
};
main()
{

	O_Overload a(15,20),b(10,20),c(100,50);
	*b;a+c;
}
