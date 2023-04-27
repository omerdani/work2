#pragma once
using namespace std;
#include<iostream>
#include<string.h>
class Product
{
	string productname;
	int id;
	static int proamount ;
	double price;
public:
	Product(string="unnamed", double=0.0);
	string getproname()const;
	int getid()const;
	int getamount()const;
    double getprice()const;
	void setproname(string);
	void setamount( int);
	void setid(int);
	void setprice(double);
	void newprice(double);
	void printproduct()const;
};

