#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    char name[50];
    int age;
    float salary;

public:
    void inputDetails() {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayDetails() {
        cout << "\n----- Employee Details -----" << endl;
        cout << "Employee ID : " << id << endl;
        cout << "Name        : " << name << endl;
        cout << "Age         : " << age << endl;
        cout << "Salary      : " << salary << endl;
    }
};

int main() {
    Employee emp;

    emp.inputDetails();
    emp.displayDetails();

    return 0;
}