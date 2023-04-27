#pragma once
#include "Product.h"
class Item  
{
    Product* proptr;
    int taken;

public:
    Item(Product* = NULL, int = 0);
    Product* getp()const;
    void setp(Product*);
    int gettaken()const;
    void settaken(int);
    double pricecalc();
    int bringid();
    void printitem();


};

