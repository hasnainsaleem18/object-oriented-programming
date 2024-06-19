using namespace std;
#include <iostream>
#include <string>
#include "class.h"




Favorite_Songs::Favorite_Songs()
    {
        song = nullptr;
        arrSize = 0;
    }
Favorite_Songs::Favorite_Songs(Favorite_Songs &s)
    {
        cout << "copy constructor is called" << endl;
        song = new string[s.get_size()];
        arrSize = s.get_size();
        for(int i = 0; i < get_size(); i++)
        {
            song[i] = s.song[i];
        } 
    }
void Favorite_Songs::set_size(int si)
    {
        arrSize = si;
    }
void Favorite_Songs::set_arr(int i, string so)
    {
        song[i] = so;
    }
int Favorite_Songs::get_size()
    {
        return arrSize;
    }
string Favorite_Songs::get_arr(int i)const
    {
        return song[i];
    }
void Favorite_Songs::printArray()
    {
        for(int i=0; i<arrSize; i++) 
        {
            cout << "(" << i+1 << ") " << song[i]<<endl;
        } 
    }
Favorite_Songs::~Favorite_Songs()
    {
        cout<<"\nDestructor called"<<endl;
        if (song != nullptr)
        {
            delete[] song;
        } 
    }
string Favorite_Songs::add_song(string song1)
    {
        string* new_song = new string[arrSize + 1];

        for(int i = 0; i < arrSize; i++)
        {
            new_song[i] = song[i];
        }

        new_song[arrSize] = song1;
        delete[] song;
        song = new_song;
        arrSize++;

        return 0;
    }
string Favorite_Songs::delete_song(int no)
    {
        //delete[] song;
        
    }
string Favorite_Songs::update_song(int no2, string song2)
    {
        song[no2] = song2;
    }
