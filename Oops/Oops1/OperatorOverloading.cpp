#include<iostream>
using namespace std;
class complexNumber{
    public:
    int imaginary;
    int real;
    
    ComplexNumber add(ComplexNumber &c1){
        ComplexNumber c3;
        c3.imaginary=c1.imaginary+this->imaginary;
        c3.real=c1.real+this->real;
        return c3;
    }
    ComplexNumber operator+(ComplexNumber &c1){
        ComplexNumber c3;
        c3.imaginary=c1.imaginary+this->imaginary;
        c3.real=c1.real+this->real;
        return c3;
    }

};

int main(){
    ComplexNumber a1,a2;
    a1.imaginary=10;
    a1.real=19;
    a2.imaginary=10;
    a2.real=19;

    ComplexNumber a3=a1+a2;
    cout<<"real"<<a3.real<<" "<<"Imaginary"<<aa3.imaginary <<endl;
} 