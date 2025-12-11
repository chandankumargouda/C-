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

int main(){
    Amu amu;
    amu.walk();
} 