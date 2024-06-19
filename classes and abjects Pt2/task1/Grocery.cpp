#include "Grocery.h"
#include <iostream>

void Grocery::setUnique_id(int id)
    {
        unique_id = id;
    }
void Grocery::setPrice(int p)
    {
        price = p;
    }
void Grocery::setQuantity(int q)
    {
        quantity = q;
    }
void Grocery::setName(string n)
    {
        name = n;
    }
int Grocery::getUnique_id()
    {
        return unique_id;
    }
int Grocery::getPrice()
    {
        return price;
    }
int Grocery::getQuantity()
    {
        return quantity;
    }
string Grocery::getName()
    {
        return name;
    }
void Grocery::display1()
    {
        cout << "Name is: " << name << endl << endl;
        cout << "ID is: " << unique_id << endl << endl;
        cout << "Price is " << price << endl << endl;
        cout << "Quantity is " << quantity << endl << endl;
    }
Grocery::Grocery(int id, int p, int q, string n)
    {
        unique_id = id;
        price = p;
        quantity = q;
        name = n;
    }
Grocery::Grocery()
    {
        unique_id = 0;
        price = 0;
        quantity = 0;
        name = "null";
    }
Grocery::~Grocery()
    {
        cout << "object destroyed" << endl << endl;
    }