#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class dice
{
private:
    int value = 0;
public:
    int roll()
    {
        srand(time(NULL));
        value = ((rand() % 6) + 1);

        return value;
    }
    int setter(int get)
    {
        value = get;

        return get;
    }
    int getter()
    {
        return value;
    }
};

int main()
{
    dice d;
    char choose;

    for (int i;;)
    {
        cout << "Do you want to roll the dice? Y/N" << endl;
        cin >> choose;

        if ((choose == 'Y') || (choose == 'y'))
        {
            if (d.setter(d.roll()) == 6)
            cout << "Side: " << d.getter() << "(Chakkaaaaa)" << endl;
            else 
            cout << "Side: " << d.getter() << "(better luck next time)" << endl;
        }
        else 
        break;
    
    }

    return 0;
}

