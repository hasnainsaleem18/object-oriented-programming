#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct MovieData 
{
    string Title;
    string Director;
    int YearReleased;
};

MovieData createMovieData(MovieData a);
void displayMovieData(MovieData call);

int main()
{
    MovieData a;
    MovieData call;
    
    call = createMovieData(a);
    displayMovieData(call);

}
MovieData createMovieData(MovieData a)
{
    cout << "Please enter movie TITLE: ";
    getline(cin, a.Title);

    cout << "Please enter movie Director: ";
    getline(cin, a.Director);

    cout << "Please enter movie YEAR RELEASED DATE: ";
    cin >> a.YearReleased;

    return a;
}
void displayMovieData(MovieData call)
{
    cout << setw(15) << setfill('.') << left << "TITLE:" << " " << right << call.Title << endl;
    cout << setw(15) << setfill('.') << left << "DIRECTOR:" << " " << right << call.Director << endl;
    cout << setw(15) << setfill('.') << left << "YEAR:" << " " << right << call.YearReleased << endl;   
}

