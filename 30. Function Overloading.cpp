#include<iostream>
using namespace std;
class F_Overload
{
	int a,b;
	public:
	void add_fn(int x,int y)
	{
	cout<<"Addition of 2 numbers is: "<<x+y<<endl;
	}
		void add_fn(int x,int y,int z)
	{
	cout<<"Addition of 3 numbers is: "<<x+y+z<<endl;
	cout<<"Function is overloaded. "<<endl;
	}

};
 main()
 {
 	F_Overload a;
 	a.add_fn(100,1000);
 	a.add_fn(20,200,2000);
 }
