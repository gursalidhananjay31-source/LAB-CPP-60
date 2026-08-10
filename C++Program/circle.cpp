#include<iostream>
using namespace std;

int main(){
    float r,area,circumfernce;
    cout << "Enter Radius: ";
    cin >> r;

    area = 3.14 * r * r;
    cout << "Area = "<< area << endl;

    circumfernce = 2 * 3.14 * r;
    cout << "Circumfernce = "<< circumfernce << endl;

    return 0;
}