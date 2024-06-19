#include <iostream>
#include <cstring>

using namespace std;

class Complex
{
    private:
        int real;
        int imag;
    public:
        void display()
        {
            cout << "Equation is: " << real << " + " << imag << "i" << endl; 
        }
        Complex()
        {

        }
        Complex(int r, int i)
        {
            real = r;
            imag = i;
        }

        friend Complex operator++(Complex &c, int);
        friend Complex operator+(Complex &c1, Complex &c2);
};
Complex operator++(Complex &c, int)
{
    cout << "after real increment" << endl;
    c.real++;

    return c;
}
Complex operator+(Complex &c1, Complex &c2)
{
    cout << "Addition" << endl;
    Complex c;

    c.real = c1.real + c2.real;
    c.imag = c1.imag + c2.imag;

    return c;
}

int main()
{
    Complex c1(2, 4);
    Complex c2(3, 5);

    c1.display();
    c2.display();

    c1++;
    c1.display();

    c2++;
    c2.display();

    Complex c3 = c1 + c2;
    c3.display();
}