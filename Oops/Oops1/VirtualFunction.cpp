#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void show(){
        cout<<"Animal Eat!"<<endl;
    }
};
class Dog:public Animal{
    public:
    void show(){
        cout<<"Dog Eat."<<endl;
    }
};
int main(){
    Dog dog;
   // dog.show();
    Animal *a;
    a=new Dog;
    a->show();
    a=new Animal;
    a->show();
} 