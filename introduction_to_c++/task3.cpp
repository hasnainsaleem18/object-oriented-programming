#include <iostream>
using namespace std;

int main()
{
    char choice;
    char choice2;
    
    cout << "DO YOU WANT BURGER? Y/N " << endl;
    cin >> choice;
    
    if (choice == 'Y' || choice == 'y')
      {
          cout << "Do you want add-on of fries and cold drink for 200 Rs only." << endl;
          cin >> choice2;
          
          if (choice2 == 'Y' || choice2 == 'y')
          {
              cout << "TOTAL PRICE IS 700" << endl;
          }
          else if (choice2 == 'N' || choice2 == 'n')
          {
              cout << "TOTAL PRICE IS 200" << endl;
          }
          else
           cout << "invalid input" << endl;
          
      }
    else if (choice == 'N' || choice == 'n')
        cout << "next time" << endl;
    else
        cout << "invalid input" << endl;
 
    return 0;
}