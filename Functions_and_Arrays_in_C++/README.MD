# Programming Tasks

This repository contains solutions for the following tasks:

1. **Password Validation and Secret Message**
2. **Menu-Driven String Operations**
3. **Hotel Room Booking System**

## 1. Password Validation and Secret Message

This program takes the name and password of a person. The password is passed to a function to check if it fulfills the following requirements:

- Password must be 8 characters long.
- Password must contain at least one special symbol (%, !, *, ^, &).

Additional optional restrictions can be added. If the password does not meet these criteria, the user is prompted to enter a valid password again. Once a valid password is entered, the program asks the user to re-enter the password to display a secret message. If the passwords match, the program displays a customized message.

### Requirements

- Validate password length (8 characters).
- Validate presence of at least one special symbol.
- Prompt user until a valid password is entered.
- Display a secret message upon successful password re-entry.

## 2. Menu-Driven String Operations

This C program takes a string from the user and provides a menu with the following options:

- **A)** Count the number of vowels in the string.
- **B)** Count both the vowels and consonants in the string.
- **C)** Display the most frequent character in the string.
- **D)** Concatenate another string with the existing string.
- **E)** Exit the program.

The program performs the selected operation and repeats until the user selects `E` to exit.

### Requirements

- Input a string from the user.
- Display a menu with the described options.
- Perform the selected operation.
- Repeat until the user chooses to exit.

## 3. Hotel Room Booking System

This program simulates a booking system for a hotel in Murree with 4 floors and 5 rooms per floor. The room prices are as follows:

- Basement and ground floor (elite rooms): 10,000 RS per day.
- Upper two floors (economy rooms): 6,000 RS per day.

The program provides a menu with the following options:

- **Book a room**
- **Show available rooms**
- **Exit the program**

### Requirements

- Represent the floors and rooms as a 2D array.
- Allow the user to book a room by entering the floor and room number, and the number of days.
- Display booking confirmation and total cost.
- Indicate booked rooms with a `*` and available rooms with a `-`.
- Display the status of all rooms.
- Repeat the menu until the user selects the exit option.
- Validate all user inputs.

### Additional Details

- Floors and rooms are represented in a 2D array.
- Provide user-friendly prompts and messages.
