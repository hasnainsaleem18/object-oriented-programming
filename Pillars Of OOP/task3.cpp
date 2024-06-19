// 22P-9123 HASNAIN SALEEM BSE-2A ASSIGNMENT-01 QUESTION-03
// TO MAM FARIBA LAIQ 
// **** COMMENTS ADDED FOR BETTER UNDERSTANDING ****

#include <iostream>
#include <cstring>

using namespace std;

class Character
{
    protected:    // did protected so that we can use it in child class
        string name;
    public:
        virtual void attack() = 0;  // abstract class using virtual key word
        
        // default and parameterized constructor
        
        Character()
        {

        }
        Character(string n)
        {
            name = n;
        }

        // virtual destructor which will call child class destructor 

        virtual ~Character()   
        {
            cout << "Character destructor is called" << endl << endl;
        }

};

class Warrior: public Character // doing inheritance from parent class
{
    private:
        int strength;
    public:
        void attack()  // method to print message of warrior 
        {
            cout << name << " " "attacks with strength " << strength << endl;
        }

        Warrior()
        {

        }
        Warrior(string n, int s): Character(n) // constructor to take values from user
        {
            strength = s;
        }
        ~Warrior()
        {
            cout << endl << "Warrior destructor is called" << endl;
        }
};

class Mage: public Character // doing inheritance from parent class
{
    private:
        int intelligence;
    public:
        void attack()  // method to print message of mage
        {
            cout << name << " " "attacks with fireballs using intelligence " << intelligence << endl;
        }

        Mage()
        {

        }
        Mage(string n, int i): Character(n) // constructor to take values from user
        {
            intelligence = i;
        }
        ~Mage()
        {
            cout << "Mage destructor is destroyed" << endl;
        }
};

class Thief: public Character // doing inheritance from parent class
{
    private:
        int agility;
    public:
        void attack()   // method to print message of thief
        {
            cout << name << " " "attacks with daggers using agility " << agility << endl;
        }
        Thief()
        {

        }
        Thief(string n, int a): Character(n)  // constructor to take values from user 
        {
            agility = a;
        }
        ~Thief()
        {
            cout << "Thief destructor is destroyed" << endl;
        }
};

int main()
{
    string name1;
    string name2;
    string name3;
    int character1;
    int character2;
    int character3;

/* taking input from user and then creating parent class pointer with new key word to 
 allocate new memory and then passing values in constructor */

    cout << "Enter the Warrior Name: " << endl;
    getline(cin >> ws, name1);

    cout << "Enter the Warrior Strength: " << endl;
    cin >> character1;

   Character *W = new Warrior(name1, character1);

    cout << "Enter the Mage Name: " << endl;
    getline(cin >> ws, name2);

    cout << "Enter the Mage Intelligence: " << endl;
    cin >> character2;

    Character *M = new Mage(name2, character2);

    cout << "Enter the Thief Name: " << endl;
    getline(cin >> ws, name3);

    cout << "Enter the Thief Agility: " << endl;
    cin >> character3;

    Character *T = new Thief(name3, character3);
    
    // calling methods and causing polymorphism
    
    cout << endl;
    W -> attack();
    M -> attack();
    T -> attack();
    cout << endl;

    // releasing pointer using delete key word

    delete W;
    W = NULL;
    delete M;
    M = NULL;
    delete T;
    T = NULL;

}