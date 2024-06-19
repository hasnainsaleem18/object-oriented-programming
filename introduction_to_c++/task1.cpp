#include <iostream>
using namespace std;

int main ()
{
    int days;
    int hours;
    int minutes;
    int seconds;
    int cal1;
    int cal2;

    cout << "Enter the seconds: " << endl;
    cin >> seconds;

    days = seconds / 86400;
    cal1 = seconds % 86400;
    hours = cal1 / 3600;
    cal2 = cal1 % 3600;
    minutes = cal2 / 60;
    seconds = cal2 % 60;

    cout << "Dayss are: " << days << endl;
    cout << "Hours are: " << hours << endl;
    cout << "Minutes are: " << minutes << endl;
    cout << "Seconds are: " << seconds << endl;

    return 0;

}
