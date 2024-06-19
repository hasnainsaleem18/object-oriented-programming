#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
    string line;
    ofstream fout;
    ifstream fin;
    int choice;

    for (int i = 0;;)
    {
        cout << "1. add an entry to the journal." << endl;
        cout << "2. display the journal." << endl;
        cout << "3. exit" << endl;
        cin >> choice;

        if (choice == 1)
        {
            fout.open("journal.txt", ios::app);
            cout << "enter journal entry: " << endl;
            getline(cin >> ws, line);
            fout << line << endl;
            cout << "entry added to the journal." << endl;
            fout.close();
        }
        else if (choice == 2)
        {
            fin.open("journal.txt");
            for (int i = 0;;)
            {
                if (!fin.eof())
                {
                    getline(fin, line);
                    cout << line << endl;
                }
                else
                {
                    fin.close();
                    break;
                }
            }
        }
        else
        break;
    }

}