# Programming Tasks

## Task 1: Journal (Diary) Simulation

Design a program in C++ that simulates a Journal (diary). The program should allow the user to enter data from the console, which will be saved in a text file representing the journal. If the program is opened again, the user should be able to see the previously saved journal entries.

### Features:
- **Add an entry to the journal**: Prompt the user to enter text for a journal entry. Append this new entry to the end of the journal file without deleting any previously saved entries.
- **Display the journal**: Read the entire contents of the journal file and display them on the console.

### Implementation Hints:
- Use `fstream` in append mode to add entries to the file.
- Manage file reading to ensure the file pointer is correctly positioned for displaying entries (consider reopening the file or resetting the file pointer).

---

## Task 2: Employee Management System

Imagine you are working on a project for a company that wants to manage their Employees data. Your task is to create a program that can handle different types of employees such as hourly employees and salaried employees. Each employee has a name and a salary.

### Requirements:
- Create a base class `Employee` with attributes common to all types of employees, such as "Employee name", and methods like constructor, getters, setters, and `calcSalary()`.
- Implement derived classes:
  - `HourlyEmployee`: Includes attributes for hourly rate and hours worked. Override `calcSalary()` to calculate salary based on hours worked and hourly rate.
  - `SalariedEmployee`: Includes an attribute for annual salary. Override `calcSalary()` to calculate monthly salary based on annual salary.
- Each derived class should have a constructor that initializes its specific attributes and calls the base class constructor.

### Example Interaction:
```plaintext
Enter hourly employee name: Fariba
Enter hourly rate: $10
Enter hours worked: 5

Hourly Employee Details:
Name: Fariba
Hourly Rate: $10
Hours Worked: 5
Hourly Employee Salary: $50

Enter salaried employee name: Ali
Enter annual salary: $100000

Salaried Employee Details:
Name: Ali
Annual Salary: $100000
Salaried Employee Salary: $8333.33
