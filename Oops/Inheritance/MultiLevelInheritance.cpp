#include<iostream>
using namespace std;
class Animal{
    protected:
    int legs;
    int eyes;
    void eat(){
        cout<<"All Animals can eat."<<endl;
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
class Cat:public Animal{
    public:
    int scratch;
    void meow(){
        legs=4;
        eyes=2;
        cout<<"All Cats Have 4 legs and 2 eyes."<<endl;
        cout<<"All Cats Make Sound called Meow"<<endl;
    }
};
int main(){
    Dog dog;
    dog.bark();
    Cat cat;
    cat.meow();
} 