#include "Product.h"
int Product::proamount = 0;
Product::Product(string namep, double p) :productname(namep), price(p){
	setid(this->proamount);
	this->proamount++;
	
}

string Product::getproname() const
{
	return this->productname;
}

int Product::getid() const
{
	return this->id;
}

int Product::getamount() const
{
	return this->proamount;
}

double Product::getprice() const
{
	return this->price;
}

void Product::setproname(string p)
{
	this->productname = p;
}

void Product::setamount( int amount)
{
	this->proamount = amount;
}

void Product::setid(int newid)
{
	this->id = newid;
}

void Product::setprice(double p1)
{
	this->price = p1;
}

void Product::newprice(double newp)
{
	this->price = this->price + this->price * newp/100;
}

void Product::printproduct() const
{
	cout << '(' << "products name: " <<  this->productname
		<< ','<<"products id: " << this->id << ',' <<"products amount: "
		<<this->proamount <<','<<"products price: " << this->price << ')'
		<< endl;
}

