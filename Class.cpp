#include<iostream>
using namespace std;

class Ticket
{
	public:
	static int train_no,pnr_no,trans_id; 
	void booking()
	{
		cout<<"Booking page is Open"<<endl;
		cout<<"Enter the train number: "<<endl;
		cin>>train_no;
	}
	void status()
	{
		cout<<"Ticket is being booked"<<endl;
		cout<<"Ticket PNR Number is"<<endl;
		cin>>pnr_no;
	}
	void Printing()
	{
		cout<<"Ticket is being printed"<<endl;
		cout<<"Ticket Transaction Number is"<<endl;
		cin>>trans_id;
	}
	
};
	main()
	{
	Ticket book1,book2;
	book1.booking();
	book1.status();
	book2.Printing();
	book2.booking();
	book2.status();
	book2.Printing();
	cout<<"The second TNo is: "<<book2.train_no<<endl;
	cout<<"The firts pnr No is: "<<book1.pnr_no<<endl;
	cout<<"The second trans no is: "<<book2.trans_id<<endl;
	}
