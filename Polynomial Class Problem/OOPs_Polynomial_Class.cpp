#include <iostream>
using namespace std;

class Polynomial
{
    int *coeff;
    int capacity;

public:
    Polynomial()
    {
        capacity = 5;
        coeff = new int[capacity];
        for (int i = 0; i < capacity; i++)
        {
            coeff[i] = 0;
        }
    }

    Polynomial(Polynomial const &P)
    {
        capacity = P.capacity;
        coeff = new int[capacity];
        for (int i = 0; i < capacity; i++)
        {
            coeff[i] = P.coeff[i];
        }
    }

    Polynomial operator=(Polynomial const &P)
    {
        capacity = P.capacity;
        coeff = new int[capacity];
        for (int i = 0; i < capacity; i++)
        {
            coeff[i] = P.coeff[i];
        }
    }

    void setCoefficient(int coe, int index)
    {
        if (index < capacity)
        {
            coeff[index] = coe;
        }

        if (index >= capacity)
        {
            while (index >= capacity)
            {
                int *newcoeff = new int[2 * capacity];
                for (int i = 0; i < capacity; i++)
                {
                    newcoeff[i] = coeff[i];
                }

                for (int i = capacity; i < 2 * capacity; i++)
                {
                    newcoeff[i] = 0;
                }
                capacity *= 2;
                cout << "capacity is: " << capacity << endl;
                delete[] coeff;
                ;
                coeff = newcoeff;
            }

            coeff[index] = coe;
        }
    }

    void print() const
    {
        cout << "capacity is: " << capacity << endl;
        for (int i = 0; i < capacity; i++)
        {
            if (coeff[i] != 0)
                cout << coeff[i] << "x" << i << "\t";
        }
        cout << endl;
    }

    Polynomial operator+(Polynomial const &P) const
    {
        Polynomial P3;
        P3.capacity = capacity + P.capacity;

        for (int i = 0; i < P3.capacity; i++)
        {
            P3.coeff[i] = 0;
        }

        for (int i = 0; i < P3.capacity; i++)
        {
            if (i < capacity && i < P.capacity)
            {
                P3.coeff[i] = coeff[i] + P.coeff[i];
            }

            if (i >= capacity && i < P.capacity)
            {
                P3.coeff[i] = P.coeff[i];
            }

            if (i >= P.capacity && i < capacity)
            {
                P3.coeff[i] = coeff[i];
            }
        }

        return P3;
    }

    Polynomial operator-(Polynomial P)
    {
        Polynomial P3;
        P3.capacity = capacity + P.capacity;

        for (int i = 0; i < P3.capacity; i++)
        {
            P3.coeff[i] = 0;
        }

        for (int i = 0; i < P3.capacity; i++)
        {
            if (i < capacity && i < P.capacity)
            {
                P3.coeff[i] = coeff[i] - P.coeff[i];
            }

            if (i >= capacity && i < P.capacity)
            {
                P3.coeff[i] = -P.coeff[i];
            }

            if (i >= P.capacity && i < capacity)
            {
                P3.coeff[i] = coeff[i];
            }
        }

        return P3;
    }

    Polynomial operator*(Polynomial P)
    {
        Polynomial P3;
        P3.capacity = capacity * P.capacity;

        for (int i = 0; i < P3.capacity; i++)
        {
            P3.coeff[i] = 0;
        }

        if (capacity >= P.capacity)
        {
            for (int i = 0; i < capacity; i++)
            {

                for (int j = 0; j < P.capacity; j++)
                {
                    int temp = i + j;
                    P3.coeff[temp] += coeff[i] * P.coeff[j];
                }
            }
        }

        if (capacity < P.capacity)
        {
            for (int i = 0; i < P.capacity; i++)
            {

                for (int j = 0; j < capacity; j++)
                {
                    int temp = i + j;
                    P3.coeff[temp] += coeff[i] * P.coeff[j];
                }
            }
        }

        return P3;
    }
};