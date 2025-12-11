#include<iostream>
using namespace std;
class Animal{
    public:
    void show(){
        cout<<"Animal Eat!";
    }
};
class Dog:public Animal{
    public:
    void show(){
        cout<<"Dog Eat.";
    }
};
int main(){
    Dog dog;
    dog.show();
} 