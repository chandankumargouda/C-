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
class Bird{
    protected:
    void eat(){
        cout<<"All Animls can eat."<<endl;
    }
    Bird(){//constructors
        cout<<"All Birds can Fly."<<endl;
    }
};
class Amu:public Animal,public Bird{
    public:
    int attack;
    void walk(){
        legs=4;
        eyes=2;
        cout<<"All Amus Have 2 legs and 2 eyes."<<endl;
        cout<<"All Amus can fly like irds did and amus can run like animals."<<endl;
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
    Amu amu;
    amu.walk();
    Dog dog;
    dog.bark();
    Puppy puppy;
    puppy.crowl();
    Cat cat;
    cat.meow();
} 