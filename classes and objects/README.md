# Programming Tasks

This repository contains solutions for the following tasks:

1. **Account Management**
2. **Dice Rolling Game**

## 1. Account Management

### Class: Account

- Define a class `Account` with private data members `name` and `balance`.
- Include methods:
  - `depositAmount(amount)`: Adds the given amount to the balance.
  - `withdrawAmount(amount)`: Subtracts the given amount from the balance, checking if sufficient funds are available.
- Implement getter and setter methods for `name` and `balance`.

### Function: createAccount()

- Implement a function `createAccount()` outside the class.
- Creates an object of `Account`, initializes its values using setters, and returns the object.

### Menu-Driven Program

- Implement a menu-driven loop in `main()`:
  1. Display Balance
  2. Deposit Amount
  3. Withdraw Amount
  4. Exit
- Depending on the user's choice, call corresponding methods of the `Account` class.
- Continue looping until the user chooses to exit.

## 2. Dice Rolling Game

### Class: Dice

- Define a class `Dice` with a data member `value`.
- Implement a default constructor to initialize `value` to 0.
- Include a method `roll()`:
  - Generates a random number between 1 and 6.
  - Updates the `value` of the dice.
  - Displays the side rolled.
  - If the value generated is 6, display "Chakkaaaa".
- Implement getter and setter methods for `value`.

### Game Loop

- Implement a loop in `main()` to simulate the dice rolling game:
  - Prompt the user "Do you want to roll the dice? Y/N".
  - If the user enters "Y", call the `roll()` method of the `Dice` class.
  - Display the rolled side and any special message ("Chakkaaaa" for 6).
  - Continue looping until the user enters "N".

### Sample Output

Example interaction for the dice rolling game:
