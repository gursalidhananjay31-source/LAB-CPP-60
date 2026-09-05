#include<iostream>
#include<string>
using namespace std;

class student {
  private:
  string name;
  int rollno;
  float marks1;
  float marks2;
  float marks3;

  public:
  student(){
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter RollNo : ";
    cin>>rollno;
    cout<<"Enter Marks1 : ";
    cin>>marks1;
    cout<<"Enter Marks2 : ";
    cin>>marks2;
    cout<<"Enter Marks3 : ";
    cin>>marks3; 
  }
  float calculate_total(){
    return marks1+marks2+marks3;
    
  }
  void putdata(){
    cout<<"___Student Details___"<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"RollNo: "<<rollno<<endl;
    cout<<"Marks1: "<<marks1<<endl;
    cout<<"Marks2: "<<marks2<<endl;
    cout<<"Marks3: "<<marks3<<endl;
    cout<<"Total Marks : "<<calculate_total()<<endl;
    
  }
};
int main()
{
student s1;
s1.putdata();

student s2;
s2.putdata();

return 0;
}