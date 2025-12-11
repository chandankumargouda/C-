#include<iostream>
using namespace std;
class Animal{
    protected:
    int legs;
    int eyes;
    void eat(){
        cout<<"All Animls can eat."<<endl;
    }
    Animal(){//constructors
        cout<<"Animals Can't Fly."<<endl;
    }
};
class Dog:public Animal{
    public:
    int attack;
    void bark(){
        legs=4;
        eyes=2;
        cout<<"All Dogs Have 4 legs and 2 eyes."<<endl;
        cout<<"All Dogs Make Sound called Bark"<<endl;
    }
};
class Puppy:public Dog{
    public:
    int cute;
    void crowl(){
        legs=4;
        eyes=2;
        cout<<"All Puppy Have 4 legs and 2 eyes."<<endl;
        cout<<"All Puppy Make Sound called Crowl"<<endl;
    }
};
int main(){
    Dog dog;
    dog.bark();
    Puppy puppy;
    puppy.crowl();
} 