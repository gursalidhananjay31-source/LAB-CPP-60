#include<iostream>
#include<string>
using namespace std;

class student{
    private:
    string name;
    int rollno;
    float marks;

public:
  void inputDetails(){
    cout<<"Enter Student Name: ";
    getline(cin>>ws,name);
    cout<<"Enter Roll Number: ";
    cin>>rollno;
    cout<<"Enter Marks: ";
    cin>>marks;
  }
  void displayDetails() const{
    cout<<"\n....Student Details....\n";
    cout<<"Name:"<<name<<endl;
    cout<<"Rollno:"<<rollno<<endl;
    cout<<"Marks:"<<marks<<endl;
  }    
};

int main(){
    student s;
    s.inputDetails();
    s.displayDetails();
    return 0;
}