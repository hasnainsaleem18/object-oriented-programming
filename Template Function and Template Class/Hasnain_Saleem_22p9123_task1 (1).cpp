#include <iostream>

using namespace std;

template <class V>
class Vector
{
    private:
        V variable;
    public:
        Vector(V variable1)
        {
            variable = variable1;
        }
        V calculateDotProduct(V v1)
        {
            return variable.calculateDotProduct(v1.variable);
        }
};
class My2DVector
{
    private:
        int x;
        int y;
    public:
        My2DVector()
        {
            x = 0;
            y = 0;
        }
        My2DVector(int x, int y)
        {
            this -> x = x;
            this -> y = y;
        }
        int calculateDotProduct(My2DVector d)
        {
            My2DVector d1;
            d1.x = x * d.x;
            d1.y = y * d.y;

          //  int d2;
           // d2 = d1.x + d1.y;

            return (d1.x + d1.y);
        }
        friend ostream &operator<<(ostream &o, My2DVector &d);
        friend istream &operator>>(istream &i, My2DVector &d);

};
class My3DVector
{
    private:
        int x;
        int y;
        int z;
    public:
        My3DVector()
        {
            x = 0;
            y = 0;
            z = 0;
        }
        My3DVector(int x, int y, int z)
        {
            this -> x = y;
            this -> y = y;
            this -> z = z;
        }
        int calculateDotProduct(My3DVector d)
        {
            My3DVector d1;
            d1.x = x * d.x;
            d1.y = y * d.y;
            d1.z = z * d.z;

            return (d1.x + d1.y + d1.z);
        }
        friend ostream &operator<<(ostream &o, My3DVector &d);
        friend istream &operator>>(istream &i, My3DVector &d);
};



ostream &operator<<(ostream &o, My2DVector &d)
{
    o << "Vector(" << d.x << ", " << d.y << ")" << endl;

    return o;
}
istream &operator>>(istream &i, My2DVector &d)
{
    cout << "enter x for vector: " << endl;
    i >> d.x;
    cout << "enter y for vector: " << endl;
    i >> d.y;

    return i;
}

ostream &operator<<(ostream &o, My3DVector &d)
{
    o << "Vector(" << d.x << ", " << d.y << ", " << d.z << ")" << endl;

    return o;
}
istream &operator>>(istream &i, My3DVector &d)
{
    cout << "enter x for vector: " << endl;
    i >> d.x;
    cout << "enter y for vector: " << endl;
    i >> d.y;
    cout << "enter z for vector: " << endl;
    i >> d.z;

    return i;
}

int main()
{
    My2DVector d1;
    My2DVector d2;
    My3DVector d3;
    My3DVector d4;

    cout << "1st vector of 2d vector" << endl;
    cin >> d1;
    cout << "2nd vector of 2d vector" << endl;
    cin >> d2;

    cout << "1st vector of 3d vector" << endl; 
    cin >> d3;
    cout << "2nd vector of 3d vector" << endl;
    cin >> d4;

    cout << d1;
    cout << d2;

    Vector<My2DVector> v1(d1);
    Vector<My2DVector> v2(d2);
    
    int dot_product1;
    dot_product1 = v1.calculateDotProduct(v2);
    cout << "dot product of 2d vector is: " << dot_product1 << endl;

    cout << d3;
    cout << d4;

    Vector <My3DVector> v3(d3);
    Vector <My3DVector> v4(d4);

    int dot_product2;
    dot_product2 = v3.calculateDotProduct(v4);
    cout << "dot product of 3d vector is: " << dot_product2;

}
