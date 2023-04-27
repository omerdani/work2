#include "Item.h"

Item::Item(Product* p1, int sum):proptr(p1),taken(sum)
{
}

Product* Item::getp ()const
{
	return  this->proptr;
}

void Item::setp(Product* p1)
{
	this->proptr = p1;
}

int Item::gettaken() const
{
	return this->taken;
}

void Item::settaken(int t)
{
	this->taken = t;
}

double Item::pricecalc()
{
	return this->proptr->getprice()* this->taken;
}

int Item::bringid()
{
	return this->proptr->getid();
}

void Item::printitem()
{
	cout <<'(' << "products name: "<< this->proptr->getproname() <<
		',' << "products id: " << this->proptr->getid() << ',' <<
		"products amount: " << this->proptr->getamount() << ','
		<< "products price " << this->proptr->getprice() <<','<<
		"products taken: " << this->taken<< ',' <<
		"total price: " << this->pricecalc() << ')' <<endl;
}
