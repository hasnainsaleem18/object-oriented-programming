#include <iostream>
#include <cstring>

using namespace std;

class DOB
{
    private:
        int day;
        int month;
        int year;
    public:
        DOB()
        {

        }
        DOB(int day, int month, int year)
        {
            day = 0;
            month = 0;
            year = 0;
        }

        void setDay(int d)
        {
            day = d;
        }
        void setMonth(int m)
        {
            month = m;
        }
        void setYear(int y)
        {
            year = y;
        }

        int getDay()
        {
            return day;
        }
        int getMonth()
        {
            return month;
        }
        int getYear()
        {
            return year;
        }
};

class Contact
{
    private:
        string name;
        int phone;
        string email;
        DOB date;
    public:
        Contact()
        {

        }

        void setName(string n)
        {
            name = n;
        }
        void setPhone(int p)
        {
            phone = p;
        }
        void setEmail(string e)
        {
            email = e;
        }
        void setDate(int d, int m, int y)
        {
            date.setDay(d);
            date.setMonth(m);
            date.setYear(y);
        }

        string getName()
        {
            return name;
        }
        int getPhone()
        {
            return phone;
        }
        string getEmail()
        {
            return email;
        }
        string getDate()
        {
            return to_string(date.getDay()) + "/" + to_string(date.getMonth()) + "/" + to_string(date.getYear());
        }
        string getMonth()
        {
            return to_string(date.getMonth());
        }
};

class contactBook
{
    private:
        Contact Arr_contact[2];
    public:
        contactBook()
        {

        }
        void create_contact()
        {
            string name;
            int number;
            string email;
            int day;
            int month;
            int year;

            for (int i = 0; i < 2; i++)
            {
                cout << "person: " << i+1 << endl;

                cout << "enter name: " << endl;
                getline(cin >> ws, name);
                Arr_contact[i].setName(name);

                cout << "enter phone no: " << endl;
                cin >> number;
                Arr_contact[i].setPhone(number);

                cout << "enter email: " << endl;
                getline(cin >> ws, email);
                Arr_contact[i].setEmail(email);

                cout << "enter day: " << endl;
                cin >> day;
                cout << "enter month: " << endl;
                cin >> month;
                cout << "enter year: " << endl;
                cin >> year;
                Arr_contact[i].setDate(day, month, year);

            }
        }
        void print_contact()
        {
            for (int i = 0; i < 2; i++)
            {
                cout << "person: " << i+1 << endl;

                cout << "name: " << Arr_contact[i].getName() << endl;
                cout << "phone no: " << Arr_contact[i].getPhone() << endl;
                cout << "email: " << Arr_contact[i].getEmail() << endl;
                cout << "DOB: " << Arr_contact[i].getDate() << endl;
            }
        }
        void print_birthday()
        {
            string month;
            cout << "enter the month to check all birthdays in that specific month in contact book: " << endl;
            getline(cin >> ws, month);

            for (int i = 0; i < 2; i++)
            {
                if (month == Arr_contact[i].getMonth())
                {
                    cout << "name: " << Arr_contact[i].getName();
                }
            }
        }
};

int main()
{
    contactBook object;

    object.create_contact();
    object.print_contact();
    object.print_birthday();

    return 0;
}
