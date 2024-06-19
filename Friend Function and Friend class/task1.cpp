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
        friend Complex addComplex(Complex c1, Complex c2);
};

Complex addComplex(Complex c1, Complex c2)
{
    Complex add;

    add.imag = c1.imag + c2.imag;
    add.real = c1.real + c2.real;

    return add;
}

int main()
{
    Complex c1(2,4);
    Complex c2(4,2);

    Complex sum = addComplex(c1,c2);
    sum.display();
}