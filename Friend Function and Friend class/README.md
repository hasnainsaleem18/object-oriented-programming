# Complex Number Operations in C++

## Task 1: Adding Complex Numbers with Friend Function

### Description
Implement a Complex class and a friend function to add two Complex numbers.

- **Complex Class**:
  - Private data members: `int real`, `int imag`.
  - Public member function: `display()` to print the complex number in `a + bi` format.
  
- **addComplex Friend Function**:
  - Signature: `Complex addComplex(Complex c1, Complex c2)`.
  - Adds two Complex objects and returns the result.

### Execution
- Create two Complex objects.
- Use `addComplex` to add them together.
- Display the result using `display()`.

---

## Task 2: Adding Operations Class for Complex Operations

### Description
Extend Task 1 by introducing an Operations class for complex number operations.

- **Operations Class**:
  - Methods: `add(Complex c1, Complex c2)`, `subtract(Complex c1, Complex c2)`.
  - Operations to perform addition and subtraction of Complex numbers.

### Execution
- Create two Complex objects.
- Use methods from Operations class to add and subtract them.
- Display the results.

---

## Task 3: Using Friend Class for Complex Operations

### Description
Refactor Task 2 to utilize a friend class instead of multiple friend functions.

- **Operations Class**:
  - Declare Complex class as a friend.
  - Methods: `add(Complex c1, Complex c2)`, `subtract(Complex c1, Complex c2)`.

### Execution
- Implement add and subtract operations using friend class methods.
- Display the results.

---

## Task 4: Overloading Unary and Binary Operators Inside Complex Class

### Description
Modify Task 1 by overloading unary and binary operators for Complex numbers.

- **Unary Operator Overloading**:
  - Overload `++` to increment the real part by one.

- **Binary Operator Overloading**:
  - Overload `+` to add two Complex objects.

### Execution
- Overload `++` and `+` inside the Complex class.
- Use `++` and `+` operators in main to increment and add Complex numbers.
- Display the results.

---

## Task 5: Overloading Operators Outside Complex Class as Friend Functions

### Description
Refactor Task 4 by overloading operators as friend functions outside the Complex class.

- **Unary Operator Overloading**:
  - Friend function `Complex operator++(Complex& c)`.

- **Binary Operator Overloading**:
  - Friend function `Complex operator+(Complex c1, Complex c2)`.

### Execution
- Implement `operator++` and `operator+` as friend functions.
- Use these operators in main to increment and add Complex numbers.
- Display the results.

---

This Markdown document outlines the tasks and objectives for implementing Complex number operations using classes and operator overloading in C++. Implement each task according to the descriptions provided.
