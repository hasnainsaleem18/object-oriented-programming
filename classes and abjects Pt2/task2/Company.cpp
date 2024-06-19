#include "Company.h"
#include <string>
#include <iostream>

using namespace std;

int Company::calc_Salary(string n, int id, string job, int h)
    {
        int hourly_rate = 10;
        int salary;
        int extra;
        int extra_1;
        int extra_2;

        if (h <= 40)
        {
            salary = h * hourly_rate;
        } 
        else
        {
            extra = h - 40;
            extra_1 = extra * (hourly_rate * 2);
            extra_2 = 40 * hourly_rate;
            salary = extra_1 + extra_2;
        }  
        return salary;
    }
void Company::setUnique_id(int id)
    {
        unique_id = id;
    }
void Company::setName(string n)
    {
        name = n;
    }
void Company::setJob_title(string job)
    {
        job_title = job;
    }
void Company::setHours(int h)
    {
        hours = h;
    }
int Company::getUnique_id()
    {
        return unique_id;
    }
string Company::getName()
    {
        return name;
    }
string Company::getJob_title()
    {
        return job_title;
    }
int Company::getHours()
    {
        return hours;
    }
