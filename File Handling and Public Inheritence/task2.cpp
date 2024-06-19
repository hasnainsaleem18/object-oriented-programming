#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
    private:
        string employee_name;
    public:
        Employee(string name)
        {
            employee_name = name;
        }
        Employee()
        {
            employee_name = "";
        }
        string get_name()
        {
            return employee_name;
        }
        void set_name(string name)
        {
            employee_name = name;
        }
        int cal_salary()
        {
            return 0;
        }
};

class HourlyEmployee: public Employee
{
    private:
        int hourly_rate;
        int hours_worked;
    public:
        HourlyEmployee(string employee_name, int hourly_rate, int hours_worked): Employee(employee_name)
        {
            hourly_rate = hourly_rate;
            hours_worked = hours_worked;
        }
        HourlyEmployee()
        {
            hourly_rate = 0;
            hours_worked = 0;
        }
        void set_rate(int rate)
        {
            hourly_rate = rate;
        }
        void set_worked(int worked)
        {
            hours_worked = worked;
        }
        int get_rate()
        {
            return hourly_rate;
        }
        int get_worked()
        {
            return hours_worked;
        }
        int cal_salary()
        {
            int salary;
            salary = hourly_rate * hours_worked;
            return salary;
        }
        void print()
        {
            cout << endl << "Hourly Employee Details: " << endl << endl;
            cout << "Name: " << get_name() << endl;
            cout << "Hourly Rate: " << hourly_rate << endl;
            cout << "Hours Worked: " << hours_worked << endl;
            cout << "Hourly Employee Salary: " << cal_salary() << endl << endl;
        }
};

class SalariedEmployee: public Employee
{
    private:
        int annual_salary;
    public:
        SalariedEmployee(string employee_name, int annual_salary): Employee(employee_name)
        {
            annual_salary = annual_salary;
        }
        SalariedEmployee()
        {
            annual_salary = 0;
        }
        void set_salary(int salary)
        {
            annual_salary = salary;
        }
        int get_salary()
        {
            return annual_salary;
        }
        int cal_salary()
        {
            int salary;
            salary = annual_salary / 12;
            return salary;
        }
        void print()
        {
            cout << endl << "Salaried Employee Details: " << endl << endl;
            cout << "Name: " << get_name() << endl;
            cout << "Annual Salary: " << annual_salary << endl;
            cout << "Salaried Employee Salary: " << cal_salary() << endl << endl;
        }
};

int main()
{
    HourlyEmployee e1;
    SalariedEmployee e2;
    string name;
    int rate;
    int worked;
    string name1;
    int salary;

    cout << "Enter hourly employee name: "<< endl;
    getline(cin, name);
    e1.set_name(name);

    cout << "Enter hourly rate: " << endl;
    cin >> rate;
    e1.set_rate(rate);

    cout << "Enter hours worked: " << endl;
    cin >> worked;
    e1.set_worked(worked);

    e1.cal_salary();
    e1.print();

    cout << "Enter salaried employee name: " << endl;
    getline(cin >> ws, name1);
    e2.set_name(name1);

    cout << "Enter annual salary: " << endl;
    cin >> salary;
    e2.set_salary(salary);

    e2.cal_salary();
    e2.print();

    return 0;

}