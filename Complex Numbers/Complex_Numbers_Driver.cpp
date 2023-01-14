#include <iostream>
#include "Complex_Class.cpp"
using namespace std;

int main()
{
    int real1, real2, imaginary1, imaginary2;
    cout << "Enter real and imaginary part for 1st: " << endl;
    cin >> real1 >> imaginary1;

    cout << "Enter real and imaginary part for 2nd: " << endl;
    cin >> real2 >> imaginary2;

    Complex C1(real1, imaginary1);
    Complex C2(real2, imaginary2);

    cout << "Your Numbers: " << endl;
    C1.print();
    C2.print();

    cout << " Enter 1 for addition and 2 for multiplication: " << endl;
    int choice;
    cin >> choice;

    if (choice == 1)
    {
        C1.plus(C2);
        C1.print();
    }

    else if (choice == 2)
    {
        C1.multiply(C2);
        C1.print();
    }

    else
        cout << "invalid choice" << endl;
}