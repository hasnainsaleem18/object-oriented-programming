#include <iostream>
#include <cstring>

using namespace std;

class Complex;
class Operations
{
    public:
    Complex add(Complex c1, Complex c2);
    Complex sub(Complex c1, Complex c2);
};
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
        friend Complex Operations::add(Complex c1, Complex c2);
        friend Complex Operations::sub(Complex c1, Complex c2);
};

Complex Operations::add(Complex c1, Complex c2)
{
    Complex add;

    add.imag = c1.imag + c2.imag;
    add.real = c1.real + c2.real;

    return add;
}
Complex Operations::sub(Complex c1, Complex c2)
{
    Complex sub;

    sub.imag = c1.imag - c2.imag;
    sub.real = c1.real - c2.real;

    return sub;
}

int main()
{
    Complex c1(8,4);
    Complex c2(10,2);

    Operations o;
    Complex sum = o.add(c1, c2);
    Operations o2;
    Complex sub = o2.sub(c1, c2);

    sum.display();
    sub.display();
        
}