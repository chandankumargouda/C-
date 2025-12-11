#include<iostream>
using namespace std;
class Bike{
    public:
    static int noOfBike;
    int tyreSize;
    int engineSize;

    Bike(int tyreSize,int engineSize=200){
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
    }
    //static void setmn;
};
int Bike::noOfBike=10;
int main(){
    Bike royalEn(15,350);
    Bike bajaj(13);

    cout<<royalEn.noOfBike<<endl;
}