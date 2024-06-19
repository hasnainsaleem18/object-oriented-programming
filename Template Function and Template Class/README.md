# Vector Class Template and Related Classes

## Vector Class Template

### Description
Create a class template called `Vector` that holds a single private member variable `v` of type `V`. Implement a constructor to initialize `v` and a public member function `calculateDotProduct` that computes the dot product with another `Vector` object of the same type.

- **Class Template**: `Vector<V>`
  - Private member: `v` of type `V`.
  - Constructor: Initializes `v`.
  - Public member function: `calculateDotProduct(Vector<V> other)`: Computes dot product with `other`.

## My2DVector Class

### Description
Define a class `My2DVector` with two private data members `x` and `y`. Implement a constructor to initialize `x` and `y`, and a default constructor that sets them to zero. Include a public member function `calculateDotProduct` to compute the dot product with another `My2DVector` object of the same type.

- **My2DVector Class**:
  - Private members: `x`, `y`.
  - Constructors: 
    - Initializes `x` and `y`.
    - Default constructor sets `x` and `y` to zero.
  - Public member function: `calculateDotProduct(My2DVector other)`: Computes dot product with `other`.

## My3DVector Class

### Description
Define a class `My3DVector` with three private data members `x`, `y`, and `z`. Implement a constructor to initialize `x`, `y`, and `z`, and a default constructor that sets them to zero. Include a public member function `calculateDotProduct` to compute the dot product with another `My3DVector` object of the same type.

- **My3DVector Class**:
  - Private members: `x`, `y`, `z`.
  - Constructors: 
    - Initializes `x`, `y`, and `z`.
    - Default constructor sets `x`, `y`, and `z` to zero.
  - Public member function: `calculateDotProduct(My3DVector other)`: Computes dot product with `other`.

## Overloading Stream Operators

### Description
Overload the stream extraction (`>>`) and insertion (`<<`) operators for both `My2DVector` and `My3DVector` classes.

- **<< Operator**: 
  - Formats output as `(x, y)` for `My2DVector`.
  - Formats output as `(x, y, z)` for `My3DVector`.

- **>> Operator**:
  - Prompts user to enter values for `x`, `y`, and `z` and assigns them to corresponding member variables.

## Main Function Execution

### Description
In the `main()` function:
- Create two objects each of `My2DVector` and `My3DVector`.
- Instantiate two objects of type `Vector` using these vectors.
- Utilize `calculateDotProduct` to compute dot products between corresponding vector pairs.
- Output vectors and their dot products using overloaded stream insertion operator (`<<`).

---

