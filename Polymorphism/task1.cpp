#include <iostream>
#include <cstring>

using namespace std;

class Animal
{
protected:
    string name;
    string colour;
public:
    virtual void display() = 0;
    virtual ~Animal()
    {
        cout << "animal destructor called" << endl;
    }
    Animal()
    {

    }
    Animal(string n, string c)
    {
        name = n;
        colour = c;
    }
};

class Deer: public Animal
{
private:
    bool antlers;
public:
    void display()
    {
        cout << "deer colour is: " << colour << endl;
        cout << "deer name is: " << name << endl;
        if (antlers)
        cout << "yes" << endl;
        else
        cout << "no" << endl;
    }
    Deer()
    {

    }
    Deer(string n, string c, bool a)
    {
        name = n;
        colour = c;
        antlers = a;
    }
};

class Zebra: public Animal
{
private:
    string stripe_pattern;
public:
    Zebra()
    {

    }
    Zebra(string n, string c, string s)
    {
        name = n;
        colour = c;
        stripe_pattern = s;
    }
    void display()
    {
        cout << "zebra colour is: " << colour << endl;
        cout << "zebra name is: " << name << endl;  
        cout << "zebra stripe pattern: " << stripe_pattern << endl;    
    }
};

int main()
{
    Animal *d = new Deer("SPIDER", "red", true);
    Animal *z = new Zebra("daniyal", "brown", "vertical");

    d -> display();
    z -> display();

    delete d;
    delete z;
}