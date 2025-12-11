#include<iostream>
using namespace std;
class Bike{
    public:
    int tyreSize;
    string name;
    Bike(){
        cout<<"Constructor without Parameter";
    }
    Bike(int tyreSize,string name){
        this->tyreSize=tyreSize;
        this->name=name;
        cout<<"Constructor with Parameter.\n";
    }
};
int main(){
    // Bike tvs;
    // tvs.tyreSize=10;
    Bike tvs(13,"tvs");
    cout<<tvs.tyreSize<<endl;
    cout<<tvs.name<<endl;
}