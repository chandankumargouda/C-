#include<iostream>
using namespace std;
class book{
    public:
    string name;
    int page;
    float price;
    int countBooks(int given_price){
        int count=0;
        if(given_price<price){
            count++;
        }
        return count;
    }
};
int main(){
    book math;
    math.name="mathematics";
    math.page=100;
    math.price=200.50;
    cout<<math.countBooks(500)<<endl;

    book phy;
    phy.name="Physics";
    phy.page=200;
    phy.price=300.50;
    cout<<phy.countBooks(200)<<endl;

    book chem;
    chem.name="Chemistry";
    chem.page=170;
    chem.price=400.50;
    cout<<chem.countBooks(100)<<endl;
}