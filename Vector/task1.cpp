// thank you mam for the amazing labs and the knowledge you gave us.
// it was amazing time with you :)

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class Item
{
    private:
        string item_name;
        int item_price;
    public:
        Item()
        {
            item_name = "";
            item_price = 0;
        }
        Item(string item_name, int item_price)
        {
            this->item_name = item_name;
            this->item_price = item_price;
        }

        string get_item_name()
        {
            return item_name;
        }
        int get_item_price()
        {
            return item_price;
        }

        void set_item_name(string item_name)
        {
            this->item_name = item_name;
        }
        void set_item_price(int item_price)
        {
            this->item_price = item_price;
        }
};

class Cart
{
    private:
        vector<Item> items;
    public:
        vector<Item>::iterator iter = items.end();

        Cart()
        {

        }
        void add_items(Item item)
        {
            iter = items.insert(iter, item);
            iter++;
        }
        void remove_item(int index)
        {
            if (items.empty() == true)
            cout << "cart is empty" << endl;
            else
            {
                iter = items.begin();       
                items.erase(iter + (index - 1));
                cout << "item is removed" << endl;
            }
        }
        void clear_cart()
        {
            items.clear();
            cout << "cart is cleared" << endl;
        }
        void update_cart(int index)
        {
            string name;
            int price;

            cout << "enter name: " << endl;
            getline(cin>>ws, name);

            cout << "enter price: " << endl;
            cin >> price;

            Item i1(name, price);
            items.at(index - 1) = i1;

            display();
            cout << "updated successfully" << endl;
        }
        void display()
        {
            for(int i = 0; i < items.size(); i++)
            {
                cout << i+1 << " " << "name: " << items[i].get_item_name() << endl;
                cout << i+1 << " " << "price: " << items[i].get_item_price() << endl;
            }
        }
};

int main()
{
    Cart carts;
    Item items;
    int choice;
    string name;
    int price;
    int number;

    items.set_item_name("hasnain");
    items.set_item_price(900);  
    carts.add_items(items); 

    for(int i;;)
    {
        cout << endl << "WELCOME TO MAM FARIBA SHOPPING CART SYSTEM" << endl << endl;
        cout << "1. Add items" << endl;
        cout << "2. Remove items" << endl;
        cout << "3. Clear cart" << endl;
        cout << "4. Exchange product" << endl;
        cout << "5. Exit" << endl;

        cout << "enter your choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "enter name: " << endl;
            getline(cin>>ws, name);
            items.set_item_name(name);

            cout << "enter price: " << endl;
            cin >> price;
            items.set_item_price(price); 

            carts.add_items(items);
        }
        else if(choice == 2)
        {
            carts.display();

            cout << "enter the item number" << endl;
            cin >> number;

            carts.remove_item(number);
        }
        else if(choice == 3)
        {
            carts.clear_cart();
        }
        else if(choice == 4)
        {
            carts.display();
            cout << "enter the item number" << endl;
            cin >> number; 

            carts.update_cart(number);   
        }
        else
        break;
    }
}

