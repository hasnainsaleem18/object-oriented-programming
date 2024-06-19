#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct student_data
{
    string student_name;
    int marks[3];
};

void Display_data(student_data student_1[]);
void Change_Marks(student_data student_1[], int s);
void Calc_Average_Marks(student_data student_1[]);

int main()
{
    student_data student_1[2];
    int option;
    student_data call;

    for(int i = 0; i < 2; i++)
    {
        cout << "enter student name "<< "[" << i+1 << "]" << ": " << endl;
        getchar();
        getline(cin, student_1[i].student_name);

        for(int i = 0; i < 3; i++)
        {
            cout << "enter course marks" << "[" << i+1 << "]" << ": ";
            cin >> student_1[i].marks[i];
        }
    }

    for (int i;;)
    { 
        cout << "menu: " << endl;
        cout << "1. " << "display student data" << endl;
        cout << "2. " << "calculate average marks" << endl;
        cout << "3. " << "change marks" << endl;
        cout << "4. " << "exit" << endl;

        cout << "please select an option: " << endl;
        cin >> option;

        if (option == 1)
        Display_data(student_1);
        else if (option == 2)
        Calc_Average_Marks(student_1);
        else if (option == 3)
        {
            int s;
            cout << "enter which student marks: " << endl;
            cin >> s;
            Change_Marks(student_1, s);
        }
        else 
        break;
        
    }
}
void Display_data(student_data student_1[])
{
    for(int i = 0; i < 2; i++)
    {
        cout << endl << "student name: "<< "[" << i+1 << "]" << ": " << student_1[i].student_name << endl;
        for(int i = 0; i < 3; i++)
        {
            cout << "student course marks" << "[" << i+1 << "]" << ": " << student_1[i].marks[i] << endl;
        }
    }
}
void Calc_Average_Marks(student_data student_1[])
{
    int option;
    cout << "enter student no: " << endl;
    cin >> option;

    if (option == 1)
    {
        int total_marks;
        total_marks = ((student_1[0].marks[0] + student_1[0].marks[1] + student_1[0].marks[2]) / 3);
        cout << "average marks of 1st student is: " << total_marks << endl;
    }
    else 
    {
        int total_marks;
        total_marks = ((student_1[1].marks[0] + student_1[1].marks[1] + student_1[1].marks[2]) / 3);
        cout << "average marks of 2nd student is: " << total_marks << endl;
    }

}
void Change_Marks(student_data *student_1, int s)
{
    // declare
    int course_no;

    // input course number
    cout << "Enter Course Number which you want to change:";
    cin >> course_no;

    // input updated marks
    cout << "Enter the updated marks: ";
    cin >> student_1[s - 1].marks[course_no - 1];
}
