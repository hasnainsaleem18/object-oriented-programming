# Programming Tasks

This repository contains solutions for the following tasks:

1. **Grocery Store Inventory Management**
2. **Employee Database Management**

## 1. Grocery Store Inventory Management

### Class: Item

- Define a class `Item` to represent an item in a grocery store's inventory.
- Include private data members:
  - `id`: Unique ID of the item
  - `name`: Name of the item
  - `price`: Price of the item
  - `quantity`: Quantity of the item available

### Constructors and Destructor

- Implement constructors:
  - Default constructor
  - Parameterized constructor that initializes `id`, `name`, `price`, and `quantity`
- Implement a destructor that prints "Object destroyed" when an object is destroyed.

### Methods

- Implement getter and setter methods for all data members (`id`, `name`, `price`, `quantity`).
- Implement a method `displayDetails()` to display all details of the item.

### Outside Functions

- Implement the following functions outside the class:
  - `displayItems(items, size)`: Displays details of all items in the array.
  - `updateItem(item)`: Updates the price or quantity of an item based on user input.
  - `searchItemById(items, size, id)`: Searches for an item by ID and displays its details if found, otherwise displays "Item not found".

### Main Program

- In `main()`, prompt the user to enter the total number of items.
- Create an array of `Item` objects based on the user input size.
- Implement a menu-driven loop with options:
  1. Display Items
  2. Update Item Details
  3. Search for Items by ID
  4. Exit

## 2. Employee Database Management

### Class: Employee

- Define a class `Employee` to manage employee data.
- Include private data members:
  - `id`: Unique ID of the employee
  - `name`: Name of the employee
  - `jobTitle`: Job title of the employee
  - `hoursWorkedPerWeek`: Number of hours worked per week by the employee

### Methods

- Implement getter and setter methods for all data members (`id`, `name`, `jobTitle`, `hoursWorkedPerWeek`).
- Implement a method `calcSalary()` to calculate and return the salary of the employee based on the hours worked per week.

### Main Program

- In `main()`, prompt the user to enter the number of employees.
- Create an array of `Employee` objects based on the user input size.
- Initialize the values for each employee using setter methods.
- Calculate the salary for each employee based on the given rules:
  - If hours worked <= 40, salary = hours worked * hourly rate
  - If hours worked > 40, calculate overtime pay and add to base pay.
- Display the name and salary of each employee.

### Additional Notes

- Ensure user-friendly prompts and clear display formatting.
- Validate inputs and handle edge cases appropriately.
- Use encapsulation to protect data and provide public interfaces for interaction.
