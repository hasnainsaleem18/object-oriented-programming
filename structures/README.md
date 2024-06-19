# Programming Tasks

This repository contains solutions for the following tasks:

1. **Movie Data Management**
2. **Student Management System**

## 1. Movie Data Management

This program uses a structure named `MovieData` to store information about a movie, including the title, director, and year released. The main function creates two variables of this structure. The program includes two functions: `createMovieData()` and `displayMovieData()`.

### Requirements

- Define a structure `MovieData` with the following members:
  - Title
  - Director
  - Year Released
- Implement the function `createMovieData()`:
  - Store values in the struct members from user input.
  - Return the structure to the main function.
- Implement the function `displayMovieData()`:
  - Take a `MovieData` structure as an argument.
  - Display the movie information in a clearly formatted manner.

## 2. Student Management System

This program uses a structure to store student data, including the student's name and an array containing the marks of 3 courses. The program includes three functions: `Display_data()`, `Change_Marks()`, and `Calc_Average_Marks()`.

### Requirements

- Define a structure `Student` with the following members:
  - Student name
  - An array containing the marks of 3 courses.
- Implement the function `Display_data()`:
  - Take an array of `Student` structures as an argument.
  - Display the data of all students.
- Implement the function `Change_Marks()`:
  - Take one `Student` structure as an argument.
  - Ask the user for the course number and updated marks.
  - Update the marks accordingly.
- Implement the function `Calc_Average_Marks()`:
  - Take one `Student` structure as an argument.
  - Calculate and return the average marks of the student.

### Additional Details

- Ensure user-friendly prompts and clear display formatting.
- Validate all user inputs where applicable.
