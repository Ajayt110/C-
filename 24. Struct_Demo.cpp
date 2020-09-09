#include<iostream>
#include<string.h>
using namespace std;
main()
{
	struct prod
	{
		int pid;
		int price;
		char p_name[10];	
	}p1,p2;
	p1.pid=1234;
	p1.price=20;
	strcpy(p1.p_name,"Mouse");
	p2.pid=4321;
	p2.price=35;
	strcpy(p2.p_name,"Key board");	
	
	cout<<"Product 1 details:\n";
	cout<<"Product ID: "<<p1.pid<<"\n"<<"Product price $: "<<p1.price<<"\n"<<"Product price: "<<p1.p_name<<"\n\n";
	cout<<"Product 2 details:\n";
	cout<<"Product ID: "<<p2.pid<<"\n"<<"Product price $: "<<p2.price<<"\n"<<"Product price: "<<p2.p_name<<"\n";	
}
