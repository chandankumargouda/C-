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
~Bike(){
    cout<<"Desructor call hua\n";
}
};
int main(){
    // Bike tvs;
    // tvs.tyreSize=10;
    Bike tvs(13,"tvs");
    cout<<tvs.tyreSize<<" "<<tvs.name<<endl;
    bool flag=true;
    if(flag==true){
        Bike bmw(17,"bmw");
        cout<<bmw.tyreSize<<" "<<bmw.name<<endl;
    }
}