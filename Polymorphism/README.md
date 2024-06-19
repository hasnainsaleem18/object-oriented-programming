# Zoo Animal Management Program

## Task 1: Implementing Animal, Deer, and Zebra Classes

Design a program for a zoo where different types and categories of animals are managed using Inheritance and polymorphism.

### Animal Class (Abstract):
- **Protected Data Members**:
  - `name` (string): Name of the animal.
  - `color` (string): Color of the animal.
- **Methods**:
  - Destructor (virtual).
  - `virtual void display() = 0;`: Pure virtual function to display information about the animal.

### Deer Class (Derived from Animal):
- **Additional Data Member**:
  - `hasAntlers` (bool): Indicates whether the deer has antlers.
- **Methods**:
  - Override `display()`: Displays the name, color, and whether the deer has antlers.

### Zebra Class (Derived from Animal):
- **Additional Data Member**:
  - `stripe_pattern` (string): Pattern of stripes on the zebra's body.
- **Methods**:
  - Override `display()`: Displays the name, color, and stripe pattern of the zebra.

### Program Execution:
- Use polymorphism to create objects of Deer and Zebra classes.
- Call the `display()` method on each object to display their respective information.

---

## Task 2: Using an Array of Pointers to Animal Class

Modify the existing code to utilize an array of pointers to the Animal class and implement a function `displayAll()`.

### Changes in Main Function:
- Create an array of pointers to the Animal class.
- Populate the array with objects of Deer and Zebra classes.
- Pass this array to `displayAll()` function.

### displayAll() Function:
- Takes an array of pointers to Animal objects.
- Calls `display()` method on each element of the array.

### Memory Management:
- Destroy the objects created in the main function to release memory.

### Notes:
- Ensure proper destruction of child class objects when releasing memory.

---

This Markdown document outlines the specifications and structure for implementing a zoo animal management program using inheritance, polymorphism, and proper memory management techniques. Modify and implement as per your programming environment and requirements.
