
#include "Customer.h"
int main()
{
	Product** productArray = new Product * [5];
	productArray[0] = new Product("Cottage", 6.5);
	productArray[1] = new Product("milky", 4);
	productArray[2] = new Product("milk", 8.3);
	productArray[3] = new Product("bread", 10.9);
	productArray[4] = new Product("eggs", 13.7);

	Customer** customerArray = new Customer * [3];
	customerArray[0] = new Customer("moshe", "054-4545457");
	customerArray[1] = new Customer("david", "054-9876543");
	customerArray[2] = new Customer("israel", "052-1287652");

	Order Morder(2, 8, 2023);
	Morder.Pupdate(productArray[0],2);
	Morder.Pupdate(productArray[2],1);
	//Morder.Printorder();
	customerArray[0]->Addorder(Morder.getproa());
	
	Order Dorder(3, 8, 2023);
	Dorder.Pupdate(productArray[2], 2);
	Dorder.Pupdate(productArray[3], 1);
	Dorder.Printorder();
	customerArray[1]->Addorder(Dorder.getproa());
	
	Order Iorder(4, 8, 2023);
	Iorder.Pupdate(productArray[1], 4);
	Iorder.Pupdate(productArray[4], 1);
	//Iorder.Printorder();
	customerArray[2]->Addorder(Iorder.getproa());
	
	for (int i = 0; i < 3; i++) {
		customerArray[i]->Printcustomer();
		cout << endl;
	}

}