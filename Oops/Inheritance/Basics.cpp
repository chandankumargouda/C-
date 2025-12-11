#include<iostream>
using namespace std;
class Vehical{
    public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;
};
class Car:public Vehical{
    public:
    int steeringSize;
};
class Bike:public Vehical{
    public:
    int handleSize;
};
class maruti:public Bike{
    public:
    int color;
};
class a{
    private:
    int a_ka_private;
    protected:
    int a_ka_protected;
    public:
    int a_ka_public;
};
class b: public a{
    public:
    int b_ka_public;
    void show(){
        a_ka_protected=100;
        cout<<a_ka_protected;
    }
};
int main(){
    b b;
    b.show();
    //b.a_ka_protected=200;
    // b.a_ka_public=300;
    // cout<<b.a_ka_protected;
    // Car car;
    // car.tyreSize=100;
    // cout<<car.tyreSize<<endl;
    // Bike bike;
    // bike.tyreSize=200;
    // cout<<bike.tyreSize<<endl;
    // maruti maruti;
    // maruti.lights=4;
    // cout<<maruti.lights<<endl;
}