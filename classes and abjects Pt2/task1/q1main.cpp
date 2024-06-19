#include <iostream>
#include <string>
#include "Grocery.h"

using namespace std;


void display(Grocery (items_arr)[], int items);
void search(Grocery (items_arr)[], int items, int id);
void update(Grocery (items_arr)[], int items);

int main()
{
    int items;
    int id;
    string n;
    int p;
    int q;
    int choice;

    cout << "enter the total no of items to store" << endl;
    cin >> items;

    Grocery items_arr[items];
    for(int i = 0; i < items; i++)
    {
        cout<< endl << "-----item (" << i+1 << ")-----" << endl << endl;
        
        cout << "enter the unique id: " << endl;
        cin >> id;
        items_arr[i].setUnique_id(id);

        cout << "enter name: " << endl;
        getchar();
        getline(cin, n);
        items_arr[i].setName(n);

        cout << "enter price: " << endl;
        cin >> p;
        items_arr[i].setPrice(p);

        cout << "enter quantity: " << endl;
        cin >> q;
        items_arr[i].setQuantity(q);
    }
    for(int i;;)
    {
        cout << endl << "-----MENU-----" << endl << endl;
        cout << "1). Display Items" << endl;
        cout << "2). Update item details" << endl;
        cout << "3). Search for items by ID" << endl;
        cout << "4). EXIT" << endl;

        cin >> choice;

        if (choice == 1)
        {
            display(items_arr, items);
        }
        else if (choice == 2)
        {
            update(items_arr, items);
        }
        else if (choice == 3)
        {
            search(items_arr, items, id);
        }
        else
        break;
    }
}
void display(Grocery (items_arr)[], int items)
{
    for (int i = 0; i < items; i++)
    {
        cout << "-----item (" << i+1 << ")-----" << endl << endl;

        cout << "unique id is: " << items_arr[i].getUnique_id() << endl;
        cout << "name is: " << items_arr[i].getName() << endl;
        cout << "price is: " << items_arr[i].getPrice() << endl;
        cout << "quantity is: " << items_arr[i].getQuantity() << endl << endl;
    }
}
void search(Grocery (items_arr)[], int items, int id)
{
    int s;
    cout << "please enter id to search: " << endl;
    cin >> s;

    int count = 0;

    for (int i = 0; i < items; i++)
    {
        if (items_arr[i].getUnique_id() == s)
        {
            cout << "item details are following" << endl << endl;
            items_arr[i].display1(); 
            count++; 
        }
    }
    if (count == 0)
    {
        cout << "item not found" << endl << endl;
    }
    
}
void update(Grocery (items_arr)[], int items)
{
    int opt;
    int new_price;
    int new_quantity;
    int n;

    cout << endl << "please enter item id: " << endl;
    cin >> n;

    cout << "what you want to change: " << endl << endl;
    cout << "1. price" << endl;
    cout << "2. quantity" << endl;
    cin >> opt;

    for (int i = 0; i < items; i++)
    {
    if (opt == 1)
    {
        if (items_arr[i].getUnique_id() == n)
        {
            cout << "please enter new price: " << endl;
            cin >> new_price;
            items_arr[i].setPrice(new_price);
        }
    }
    else
    {
        if (items_arr[i].getUnique_id() == n)
        {
            cout << "please enter new quantity: " << endl;
            cin >> new_quantity;
            items_arr[i].setQuantity(new_quantity);
        }
    }
    }
}