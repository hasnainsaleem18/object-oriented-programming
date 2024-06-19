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
        Complex operator++(int)
        {
            cout << "after real increment" << endl;
            real++;

            return *this;
        }
        Complex operator+(const Complex &c) const
        {
            cout << "Addition" << endl;
            Complex c1;

            c1.real = real + c.real;
            c1.imag = imag + c.imag;

            return c1;
        }
};

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