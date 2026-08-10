#include<iostream>
using namespace std;

int main()
{
int num1,num2,sum,diff,mult,div,mod;
    cout<<"Enter two number: ";
    cin>>num1;
    cin>>num2;
    sum=num1+num2;
    diff=num1-num2;
    mult=num1*num2;
    div=num1/num2;
    mod=num1%num2;
    cout<<"Addition: "<<sum<<"\n"<<"Substraction: "<<diff<<"\n"<<"Multiplication: "<<mult<<"\n"<<"Division: "<<div<<"\n"<<"MOdulus: "<<mod;
    return 0;
}    