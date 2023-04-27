
#define _CRT_SECURE_NO_WARNINGS
#include "Customer.h"

Customer::Customer(string name, string pn):custname(name),phonenumber(pn)
{
	this->ordersize = 0;
}

string Customer::getcusname() const
{

	return this->custname;
}

string Customer::getphone() const
{
	return this->phonenumber;
}

Order** Customer::getorders() const
{
	return this->orders;
}

int Customer::getordersize() const
{
	return this->ordersize;
}

void Customer::setcusname(string name)
{
	this->custname = name;
}

void Customer::setphonenumber(string pn)
{
	this->phonenumber = pn;
}

void Customer::setorders(Order** oarr)
{
	this->orders = oarr;
}

void Customer::setordersize(int size)
{
	this->ordersize = size;
}

void Customer::Addorder(Item** itemarr)////&product,amount
{
	int length;
	while (itemarr != nullptr) {
		length++;
	}
	// Prompt the user to enter the order date
	int day, month, year;
	cout << "Enter order date (dd mm yyyy): ";
	cin >> day >> month >> year;
	Date orderDate(day, month, year);
	
}


double Customer::Cost(Date date)
{
	
	for (int i = 0; i < this->ordersize; i++)
	{
		if (orders[i]->getOdate().getDay() == date.getDay() &&
			orders[i]->getOdate().getMonth() == date.getMonth() &&
			orders[i]->getOdate().getYear() == date.getYear()) return orders[i]->Ptotal();
	}
	cout << "No order on this date" << endl;
	 return -1;
}

void Customer::Printcustomer() const
{
	cout << "customers name:" << this->custname << endl
	<< "customers phone number:" << this->phonenumber << endl;
	for (int i = 0; i < this->ordersize; i++)
	{
		this->orders[i]->Printorder();
	}
}
