# Programming Tasks

## Task 1: Animal, Bird, and Reptile Classes

Design a program that includes a base class named Animal, and two derived classes, Bird and Reptile, that are privately inherited from the Animal class.

### Animal Class:
- **Data Members**: 
  - `name` (string): Name of the animal.
  - `age` (integer): Age of the animal.
- **Methods**:
  - `speak()`: Empty method declaration.

### Bird Class (Derived from Animal):
- **Additional Data Member**:
  - `wingLength` (double): Length of the bird's wings.
- **Method**:
  - Override `speak()`: Displays the name, age, and a message indicating that the bird can sing.

### Reptile Class (Derived from Animal):
- **Additional Data Member**:
  - `habitat` (string): Environment where the reptile lives.
- **Method**:
  - Override `speak()`: Displays the name, age, and a message indicating that the reptile can creep.

### Program Execution:
- The main function creates an object of the Bird class and an object of the Reptile class.
- Initializes their data members using constructors.
- Calls the `speak()` member function to display information about each object.

---

## Task 2: Skimmer Class Simulation

Design a program that simulates the behavior of a Skimmer, which is a type of boat capable of both swimming and flying. The Skimmer class will be derived from two base classes, Boat and Plane, using protected inheritance.

### Boat Class:
- **Data Member**:
  - `boatLength` (double): Length of the boat.
- **Method**:
  - `swim()`: Prints "I am swimming".

### Plane Class:
- **Data Member**:
  - `maxAltitude` (double): Maximum altitude the plane can reach.
- **Method**:
  - `fly()`: Prints "I am flying".

### Skimmer Class (Derived from Boat and Plane):
- **Private Data Member**:
  - `numPassengers` (int): Number of passengers the skimmer can carry.
- **Public Method**:
  - `swimAndFly()`: Calls `swim()` and `fly()` methods inherited from Boat and Plane respectively.

### Program Execution:
- In the main function, create an object of the Skimmer class and initialize it through the constructor.
- Display properties of the Skimmer object using a `display()` member function (not explicitly mentioned in the requirements, but implied to show properties).
- Call the `swimAndFly()` function to simulate the behavior of the Skimmer.

### Notes:
- None of the classes should have getter and setter methods; data members should be initialized through constructors.

---

