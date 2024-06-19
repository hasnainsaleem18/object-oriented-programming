#include <iostream>
#include <cstring>

using namespace std;

class Account
{
private:
    string name;
    int balance;
public:
    int depositAmount(int amount)
    {
        balance = amount + balance;
        return amount;
    }
    int withdrawAmount(int amount)
    {
        balance = balance - amount;
    }
    void setBalance(int new_balance)
    {
        balance = new_balance;
    }
    int getBalance()
    {
        return balance;
    }
    void setName(string new_name)
    {
        name = new_name;
    }
    string getName()
    {
        return name;
    }
};
void createAccount(Account *h);

int main()
{
    Account h;
    int amount;
    int choice;
    int store;
    int store1;

    createAccount(&h);


    for (int i;;)
    {
        cout << "1. DisplayBalance" << endl;
        cout << "2. Deposit Amount" << endl;
        cout << "3. Withdraw Amount" << endl;
        cout << "4. Exit" << endl;

        cin >> choice;

        if (choice == 1)
        {
            cout << "your balance is: " << h.getBalance() << endl;
        }
        else if (choice == 2)
        {
            cout << "please enter your amount: " << endl;
            cin >> amount;
            store = h.depositAmount(amount);
            cout << "deposited balance is: " << store << endl;
        }
        else if (choice == 3)
        {
            cout << "enter the amount you want to withdrawal: " << endl;
            cin >> amount;
            if (amount > h.getBalance())
            {
                cout << "not enough balance" << endl;
            }
            else
            {
                store1 = h.withdrawAmount(amount);
            }
        }
        else 
        break;
    }
}
void createAccount(Account *h)
{
    string new_name;
    int new1;

    cout << "Enter your name to create an account: " << endl;
    getline(cin,new_name);
    h -> setName(new_name);

    cout << "Enter the amount you want to deposit for the first time: " << endl;
    cin >> new1;
    h -> setBalance(new1);
}


