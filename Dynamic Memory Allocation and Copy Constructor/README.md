# Favourite Songs Management Program

This program manages a list of favorite songs using a class named `Favourite_Songs` in C++.

## Class: Favourite_Songs

### Data Members

- `size`: Size of the dynamic array (number of songs).
- `songs`: Pointer to a dynamic array of strings containing the song names.

### Methods

- **Constructor**: Initializes the object with a dynamic array of song names.
- **Destructor**: Releases dynamically allocated memory when the object is destroyed.
- **Copy Constructor**: Creates a deep copy of the object.
- **addSong(string song)**: Adds a new song to the array by creating a new array with increased size.
- **deleteSong(string song)**: Deletes a song from the array and updates the array accordingly.
- **updateSong(string oldSong, string newSong)**: Updates an existing song in the array.
- **printSongs()**: Prints all the songs in the array.

### Functionality

- The program allows the user to manage a list of favorite songs:
  1. Add a new song.
  2. Delete a song.
  3. Update a song.
  4. Print all songs.

### Memory Management

- Uses `new` and `delete` keywords for dynamic memory allocation and deallocation.
- Implements a deep copy in the copy constructor to handle object copying.

### Program Structure

- The program is implemented in separate header (.h) and source (.cpp) files for better organization and clarity.
- The implementation separates the class definition, member function definitions, and main program logic.

### Additional Notes

- Ensure proper validation and error handling for user inputs.
- Use of encapsulation to protect data and provide public methods for interaction with the song list.

