#include <iostream>
#include <string>
using namespace std;

class student {
private:
    string name;
    int rollno;
    float marks1;
    float marks2;
    float marks3;

public:
    student(string n = "Dhananjay", int r = 45, float m1 = 67,
            float m2 = 78, float m3 = 89) {
        name = n;
        rollno = r;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    float calculate_total() {
        return marks1 + marks2 + marks3;
    }

    void putdata() {
        cout << "___Student Details___" << endl;
        cout << "Name : " << name << endl;
        cout << "RollNo: " << rollno << endl;
        cout << "Marks1: " << marks1 << endl;
        cout << "Marks2: " << marks2 << endl;
        cout << "Marks3: " << marks3 << endl;
        cout << "Total Marks : " << calculate_total() << endl;
    }
};

int main() {
    student s1;
    s1.putdata();

    student s2("Rahul", 101, 85, 90, 88);
    s2.putdata();

    return 0;
}