#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    int age;
    void greeting(){
        cout<<"Hello! chandan"<<endl;
    }
};
class cal{
    private:
    int a=10;
    int b=5;
    public:
    void add(){
        cout<<a+b<<endl;
    }
};
int main(){
    student chandan;
    chandan.name="Chandan Kumar Gouda";
    chandan.rollno=23;
    chandan.age=22;
    cout<<chandan.name<<endl;
    cout<<chandan.rollno<<endl;
    cout<<chandan.age<<endl;
    chandan.greeting();
    cal calculate;
    calculate.add();
}