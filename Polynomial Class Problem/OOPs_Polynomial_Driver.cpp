#include <iostream>
using namespace std;
#include "OOPs_Polynomial_Class.cpp"

int main()
{
    int len1;
    cout << "Enter length of 1st Polynomial" << endl;
    cin >> len1;

    int coe, degg;
    int deg[len1];
    int coeff[len1];

    cout << "Enter your degrees" << endl;
    for (int i = 0; i < len1; i++)
    {
        cin >> degg;
        deg[i] = degg;
    }

    cout << "Your deg array is:" << endl;
    for (int i = 0; i < len1; i++)
    {
        cout << deg[i] << "\t";
    }
    cout << endl;

    cout << "Enter your coefficients" << endl;
    for (int i = 0; i < len1; i++)
    {
        cin >> coe;
        coeff[i] = coe;
    }

    cout << "Your coefficient array is:" << endl;
    for (int i = 0; i < len1; i++)
    {
        cout << coeff[i] << "\t";
    }
    cout << endl;

    Polynomial P1;
    for (int i = 0; i < len1; i++)
    {
        P1.setCoefficient(coeff[i], deg[i]);
        cout << coeff[i] << " is set at " << deg[i] << endl;
    }

    P1.print();

    int len2;
    cout << "Enter length of 2nd Polynomial" << endl;
    cin >> len2;

    int deg2[len2];
    int coeff2[len2];

    cout << "Enter your degrees" << endl;
    for (int i = 0; i < len2; i++)
    {
        cin >> degg;
        deg2[i] = degg;
    }

    cout << "Your deg array is:" << endl;
    for (int i = 0; i < len2; i++)
    {
        cout << deg2[i] << "\t";
    }
    cout << endl;

    cout << "Enter your coefficients" << endl;
    for (int i = 0; i < len2; i++)
    {
        cin >> coe;
        coeff2[i] = coe;
    }

    cout << "Your coefficient array is:" << endl;
    for (int i = 0; i < len2; i++)
    {
        cout << coeff2[i] << "\t";
    }
    cout << endl;

    Polynomial P2;
    for (int i = 0; i < len2; i++)
    {
        P2.setCoefficient(coeff2[i], deg2[i]);
        cout << coeff2[i] << " is set at " << deg2[i] << endl;
    }

    P2.print();

    int choice;
    cout << " Enter 1  for addition \n Enter 2 for Subtarction of P1-P2 \n Enter 3 for Multiplication:" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        Polynomial P3 = P1 + P2;
        P3.print();
        break;
    }

    case 2:
    {
        Polynomial P3 = P1 - P2;
        P3.print();
    }

    case 3:
    {
        Polynomial P3 = P1 * P2;
        P3.print();
    }

    default:
        break;
    }
}
