#pragma once
#include "Item.h"
#include "Date.h"
class Order 
{
	Item** proarr = new Item*;
	int SumItem; // proarr size
	Date orderdate;
public :
	Order(int=0,int=0,int=0);
	Order(const Order&);
	Item** getproa() const;
	int getSumItem() const;
	Date getOdate() const;
	void setproa(Item**);
	void setSumItem(int);
	void setOdate(Date);
	void Pupdate(Product*,int);
	void updateamout(int, int);
	double Ptotal();
	void Printorder();






};

