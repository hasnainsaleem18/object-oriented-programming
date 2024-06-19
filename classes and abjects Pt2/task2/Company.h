#include <string>
#include <iostream>

using namespace std;


class Company
{
private:
    int unique_id;
    string name;
    string job_title;
    int hours;
public:
    int calc_Salary(string n, int id, string job, int h);
    void setUnique_id(int id);
    void setName(string n);
    void setJob_title(string job);
    void setHours(int h);
    int getUnique_id();
    string getName();
    string getJob_title();
    int getHours();

};