#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

void check_password(string pass);

int main()
{
    string pass;
    string name;

    cout << "ENTER YOU NAME" << endl;
    getline(cin, name);

    cout << "ENTER 8 CHARACTERS LONG PASSWORD" << endl;
    getline(cin, pass);

    check_password(pass);

    return 0;

}
void check_password(string pass)
{
    string re_check;
    int p;
    for(int i = 0;;)
    {
        int len = pass.length();
        if (len >= 8)
        {
            for (int i =0; i<len; i++)
            {
                if ((pass[i] == '%') || (pass[i] == '!') || (pass[i] == '*') || (pass[i] == '^') || (pass[i] == '&'))
                {   
                    cout << "Enter same password again: " << endl;
                    getline(cin,re_check);
                    p = pass.compare(re_check);
                    break;
                }
            }            
        }
        else
        {
            cout << "ENTER 8 CHARACTERS LONG PASSWORD" << endl;
            getline(cin, pass);
        }
        
        if (p == 0)
        {
            cout << "You know what? You can be a great programmer. Keep Coding!" << endl;
            break;
        }
        else
        {
            cout << "ENTER 8 CHARACTERS LONG PASSWORD" << endl;
            getline(cin, pass);
        }
    }
}