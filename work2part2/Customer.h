#pragma once
#include "Order.h"
class Customer
{
	string custname;
	string phonenumber;
	Order** orders= new Order*;
	int ordersize;

public:
	Customer(string, string);
	string getcusname()const;
	string getphone()const;
	Order** getorders()const;
	int getordersize()const;
	void setcusname(string);
	void setphonenumber(string);
	void setorders(Order**);
	void setordersize(int);
	void Addorder(Item**);
	double Cost(Date);
	void Printcustomer()const;

};

