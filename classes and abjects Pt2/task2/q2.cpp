#include <iostream>
#include <string>
#include "Company.h"

using namespace std;

void display(Company (employees)[], int emp, string n, int id, string job, int h);

int main()
{
    int emp;

    string n;
    int id;
    string job;
    int h;

    cout << "enter the no of employees: " << endl;
    cin >> emp;

    Company employees[emp];
    
    for (int i = 0; i < emp; i++)
    {
        cout << "EMPLOYEE " << i+1 << ":" << endl;

        cout << "enter the name of employee:" << endl;
        getchar();
        getline(cin,n);
        employees[i].setName(n);

        cout << "enter the unique id: " << endl;
        cin >> id;
        employees[i].setUnique_id(id);

        cout << "enter the job title: " << endl;
        getchar();
        getline(cin, job);
        employees[i].setJob_title(job);

        cout << "enter the hours: " << endl;
        cin >> h;
        employees[i].setHours(h);    
    }

    display(employees, emp, n, id, job, h);
}
void display(Company (employees)[], int emp, string n, int id, string job, int h)
{
    for(int i = 0; i < emp; i++)
    {
        cout << "EMPLOYEE " << i+1 << ":" << endl;

        cout << "name of employee: " << employees[i].getName() << endl;
        cout << "salary is: " << employees[i].calc_Salary(n, id, job, h) << endl; 
    }
}
