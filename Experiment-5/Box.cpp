#include <iostream>
using namespace std;

class Box {
private:
    double length, breadth, height;

public:
    // Default constructor
    Box() {
        length = breadth = height = 1;
        cout << "Default constructor called\n";
    }

    // Parameterized constructor
    Box(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
        cout << "Parameterized constructor called\n";
    }

    // Copy constructor
    Box(const Box &b) {
        length = b.length;
        breadth = b.breadth;
        height = b.height;
        cout << "Copy constructor called\n";
    }

    // Calculate volume
    double volume() {
        return length * breadth * height;
    }

    // Display details
    void display() {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Height: " << height << endl;
        cout << "Volume: " << volume() << endl;
    }

    // Destructor
    ~Box() {
        cout << "Destructor called\n";
    }
};

int main() {

    Box box1;                  // Default constructor
    box1.display();

    Box box2(2, 3, 4);         // Parameterized constructor
    box2.display();

    Box box3(box2);            // Copy constructor
    box3.display();

    return 0;
}