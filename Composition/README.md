# Contact Management Software

This program implements a contact management software using object-oriented principles with composition.

## Classes and Composition

### Class: DateOfBirth

- Represents the date of birth of a contact.
- Data members:
  - `day`, `month`, `year`: Integer values representing the date.

### Class: Contact

- Represents a single contact in the contact book.
- Composition Relationship:
  - Contains an object of the `DateOfBirth` class.
- Data members:
  - `name`: Name of the contact.
  - `phone_no`: Phone number of the contact.
  - `email`: Email address of the contact.
  - `dob`: Object of `DateOfBirth` representing the date of birth.

### Class: ContactBook

- Represents the entire contact book containing multiple contacts.
- Composition Relationship:
  - Contains an array (composition of multiple `Contact` objects).
- Data members:
  - `contacts`: Array of `Contact` objects.
  - `totalContacts`: Total number of contacts in the book.

### Methods

- **addContact()**: Adds a new contact to the contact book.
- **deleteContact(name)**: Deletes a contact by name from the contact book.
- **printContacts()**: Prints details of all contacts in the contact book.
- **printBirthdaysInMonth(month)**: Prints names of contacts whose birthdays fall in the specified month.

### Program Structure

- The program uses composition where `ContactBook` contains an array of `Contact` objects.
- Implements methods for adding, deleting, and printing contacts, as well as searching by birthday month.

### Files Included

- `contact_management.cpp`: Contains the main program logic and implementations of classes.
- `contact_management.png`: Class diagram created in Draw.io illustrating the structure and relationships.

### Additional Notes

- Ensure proper validation and error handling for user inputs.
- Utilize object-oriented principles such as encapsulation, composition, and inheritance appropriately.
