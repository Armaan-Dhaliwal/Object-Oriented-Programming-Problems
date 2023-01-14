#include <iostream>
using namespace std;

class Complex
{

private:
    int real;
    int imaginary;

public:
    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    void print()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }

    void plus(Complex const &C2)
    {
        real = real + C2.real;
        imaginary = imaginary + C2.imaginary;
    }

    void multiply(Complex C2)
    {
        int temp = real;
        real = real * C2.real;
        real = real - imaginary * C2.imaginary;
        imaginary = temp * C2.imaginary + imaginary * C2.real;
    }
};