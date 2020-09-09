#include<iostream>
using namespace std;
class C_Overload
{
	public:
	C_Overload()
	{
		cout<<"Overloadin First constructor. "<<endl;	
	}
	C_Overload(int x, int y)
	{
		cout<<"Overloadin Second constructor. x="<<x<<" y="<<y<<endl;
	}
	C_Overload(char x, int y)
	{
		cout<<"Overloadin Third constructor. x="<<x<<" y="<<y<<endl;
	}
	C_Overload(int x, int y,int z)
	{
		cout<<"Overloadin fourth constructor. x+y+z="<<x+y+z<<endl;
	}
};
int main()
{
	C_Overload x, a(10,15),b('a',100),c(1000,2000,3000);
	return 0;
}
