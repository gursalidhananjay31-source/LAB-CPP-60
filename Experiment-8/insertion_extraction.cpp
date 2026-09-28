#include <iostream>
using namespace std;

class Distance
{
    int feet, inch;

public:
    // Overload >> operator
    friend istream& operator>>(istream &in, Distance &d)
    {
        cout << "Enter feet: ";
        in >> d.feet;

        cout << "Enter inches: ";
        in >> d.inch;

        return in;
    }

    // Overload << operator
    friend ostream& operator<<(ostream &out, Distance &d)
    {
        out << d.feet << " feet " << d.inch << " inches";
        return out;
    }
};

int main()
{
    Distance d1, d2;

    cout << "Enter First Distance:\n";
    cin >> d1;

    cout << "\nEnter Second Distance:\n";
    cin >> d2;

    cout << "\nFirst Distance: " << d1;
    cout << "\nSecond Distance: " << d2;

    return 0;
}