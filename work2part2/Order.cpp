#include "Order.h"

Order::Order(int day, int month, int year) :orderdate(day, month, year){
	this->SumItem = 0;
}

Order::Order(const Order& o):proarr(o.proarr),SumItem(o.SumItem),orderdate(o.orderdate)
{
}

Item** Order::getproa() const
{
	return this->proarr;
}

int Order::getSumItem() const
{
	return this->SumItem;
}

Date Order::getOdate() const
{
	return this->orderdate;
}

void Order::setproa(Item** arr)
{
	this->proarr = arr;
}

void Order::setSumItem(int sum)
{
	this->SumItem = sum;
}

void Order::setOdate(Date o)
{
	this->orderdate = o;
}

void Order::Pupdate(Product* p, int amount)
{
	
	int flag = 0;
	for (int i = 0; i < this->SumItem; i++) {
		if (p->getproname() == this->proarr[i]->getp()->getproname()) {
			flag = 1;
			this->proarr[i]->settaken(amount);
			break;
		}
	}
	if (!flag) {
		Item* item = new Item(p, amount);
		this->proarr[this->SumItem] = item;
		this->SumItem++;
	}
	else cout << "product already exists" << endl;
}

void Order::updateamout(int id , int current)
{
	for (int i = 0; i < this->SumItem; i++) {
		if (id == this->proarr[i]->getp()->getid()) {
			this->proarr[i]->getp()->setamount(current);
			break;
		}
	}	
}

double Order::Ptotal()
{
	double total = 0;
	for (int i = 0; i < this->SumItem; i++)
		total += this->proarr[i]->pricecalc();
		
	return total;

}

void Order::Printorder()
{
	cout << "Order date is: "; this->orderdate.printDate(); 
	for (int i = 0; i < this->SumItem; i++) {
		this->proarr[i]->printitem();
	}
	cout << "Total order cost is:" <<'['<< this->Ptotal()<<']'; cout << endl;
}
