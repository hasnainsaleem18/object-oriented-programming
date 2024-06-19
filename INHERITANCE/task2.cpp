#include <iostream>
#include <cstring>

using namespace std;

class Boat
{
    public:
        int boatLength;
        void swim()
        {
            cout << "i am swimming" << endl;
        }
        Boat()
        {

        }
        Boat(int l)
        {
            boatLength = l;
        }
};

class Plane
{
    public:
        int maxAltitude;
        void fly()
        {
            cout << "i can fly" << endl;
        }
        Plane()
        {

        }
        Plane(int a)
        {
            maxAltitude = a;
        }
};
class Skimmer: protected Boat, protected Plane
{
    private:
        int numPassengers;
        string name;
    public:
        void swimAndFly()
        {
            Plane::fly();
            Boat::swim();
        }
        Skimmer()
        {

        }
        Skimmer(int n, string na, int l, int a): Boat(l), Plane(a)
        {
            numPassengers = n;
            name = na;
        }
        void display()
        {
            cout << endl << "skimmer name: " << name << endl;
            cout << "length: " << boatLength << endl;
            cout << "altitude: " << maxAltitude << endl;
            cout << "passengers: " << numPassengers << endl;
        }

};

int main()
{
    Skimmer s(3, "gta", 50, 7000);

    s.display();
    s.swimAndFly();
}