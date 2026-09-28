#include <iostream>
using namespace std;

class Matrix
{
    int a[2][2];

public:
    // Function to input matrix
    void input()
    {
        cout << "Enter 4 elements: ";
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    // Function to display matrix
    void display()
    {
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Overloading + operator
    Matrix operator +(Matrix m)
    {
        Matrix temp;

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }

        return temp;
    }

    // Overloading - operator
    Matrix operator -(Matrix m)
    {
        Matrix temp;

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                temp.a[i][j] = a[i][j] - m.a[i][j];
            }
        }

        return temp;
    }

    // Overloading == operator
    bool operator ==(Matrix m)
    {
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                if(a[i][j] != m.a[i][j])
                    return false;
            }
        }

        return true;
    }
};

int main()
{
    Matrix M1, M2, M3;

    cout << "Enter elements of Matrix 1:\n";
    M1.input();

    cout << "Enter elements of Matrix 2:\n";
    M2.input();

    // Matrix addition
    M3 = M1 + M2;
    cout << "\nMatrix Addition:\n";
    M3.display();

    // Matrix subtraction
    M3 = M1 - M2;
    cout << "\nMatrix Subtraction:\n";
    M3.display();

    // Matrix comparison
    if(M1 == M2)
        cout << "\nBoth matrices are equal.";
    else
        cout << "\nBoth matrices are not equal.";

    return 0;
}