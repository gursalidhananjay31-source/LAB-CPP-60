#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    string name;
    int id;
    int age;
    string disease;
    double fee;
    double totalBill;

public:
    // Parameterized constructor
    Patient(string n, int i, int a, string d, double f) {
        name = n;
        id = i;
        age = a;
        disease = d;
        fee = f;
        totalBill = 0;
    }

    // Register patient
    void registerPatient() {
        cout << name << " registered successfully." << endl;
    }

    // Calculate bill
    void calculateBill(int visits) {
        totalBill = fee * visits;
        cout << "Total Bill = Rs. " << totalBill << endl;
    }

    // Display patient details
    void display() {
        cout << "\n--- Patient Record ---" << endl;
        cout << "ID       : " << id << endl;
        cout << "Name     : " << name << endl;
        cout << "Age      : " << age << endl;
        cout << "Disease  : " << disease << endl;
        cout << "Fee      : Rs. " << fee << endl;
        cout << "Total Bill: Rs. " << totalBill << endl;
    }
};

int main() {
    Patient p1("Aditya", 501, 34, "Viral Fever", 300);
    Patient p2("Akshay", 502, 45, "Back Pain", 450);

    p1.registerPatient();
    p2.registerPatient();

    p1.calculateBill(3);
    p2.calculateBill(1);

    p1.display();
    p2.display();

    return 0;
}
