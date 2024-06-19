#include <iostream>
#include <cstring>

using namespace std;

class Animal
{
    public:
        string name;
        int age;
        void speak()
        {

        }
        Animal()
        {

        }
        Animal(string n, int a)
        {
            name = n;
            age = a;
        }
};

class Bird: private Animal
{
    private:
        int wingLength;
    public:
        void speak()
        {
            cout << endl << endl << "my name is: " << name << endl;
            cout << "my age is: " << age << endl;
            cout << "my wing length is: " << wingLength << endl;
            cout << "i'm a bird and i can sing" << endl << endl << endl;
        }
        Bird()
        {

        }
        Bird(string n, int a, int l): Animal(n, a)
        {
            wingLength = l;
        }

};

class Reptile: private Animal
{
    private:
        string habitat;
    public:
        void speak()
        {
            cout << "my name is: " << name << endl;
            cout << "my age is: " << age << endl;
            cout << "my habitat is: " << habitat << endl;
            cout << "i'm a reptile. i can creep" << endl;
        }
        Reptile()
        {

        }
        Reptile(string n, int a, string h): Animal(n, a)
        {
            habitat = h;
        }
};

int main()
{
    Bird b("parrot", 2, 5);
    Reptile r("crocodile", 5, "land");

    b.speak();
    r.speak();

}