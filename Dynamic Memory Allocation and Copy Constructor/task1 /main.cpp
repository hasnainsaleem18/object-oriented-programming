#include <iostream>
#include <cstring>
#include "class.h"

using namespace std;

int main()
{

    Favorite_Songs my_songs;
   

    int choice;
    string song1;
    string song2;
    int no;
    int no2;

    for (int i;;)
    {
        cout << "1. add a song" << endl;
        cout << "2. delete a song" << endl;
        cout << "3. update a song" << endl;
        cout << "4. print all songs" << endl;
        cout << "5. create backup of songs" << endl;
        cout << "6. exit" << endl;

        cout << "enter your choice" << endl;
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                cout << "enter the song: " << endl;
                cin >> song1;
                my_songs.add_song(song1);
                my_songs.printArray();
                break;
            }
            case 2:
            {
                my_songs.printArray();
                cout << "enter no which you want to delete: " << endl;
                cin >> no;
                my_songs.delete_song(no-1);
                my_songs.printArray();
                break;
            }
            case 3:
            {
                my_songs.printArray();
                cout << "enter which song you want to update: " << endl;
                cin >> no2;
                cout << "enter the updated song: " << endl;
                getline(cin >> ws, song2);
                my_songs.update_song(no2-1, song2);
                my_songs.printArray();
                break;
            }
            case 4:
            {
                my_songs.printArray();
                break;
            }
            case 5:
            {
                Favorite_Songs my_songs1 = my_songs;
                cout << "backup created" << endl;
                my_songs1.printArray();
            }
        }

        if (choice == 6)
        {
            break;
        }
        else
        {
            continue;
       }
     }
}