#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rno;
    float marks;
    student(string name,int rno,float marks){//constructor
          this->name=name;
          this->rno=rno;
          this->marks=marks;  
    }
};
int main(){
    student s("chandan",23,92.6);
    student* ptr=&s;
    cout<<s.name<<endl;
    ptr->name="deepak";
    cout<<s.name;
}