#include <iostream>
#include <cstring>

using namespace std;

class Favorite_Songs
{
private:
    string* song;
    int arrSize;
public:
    Favorite_Songs();
    Favorite_Songs(Favorite_Songs &s);
    void set_size(int si);
    void set_arr(int i, string so);
    int get_size();
    string get_arr(int i)const;
    void printArray();
    ~Favorite_Songs();
    string add_song(string song1);
    string delete_song(int no);
    string update_song(int no2, string song2);
};
