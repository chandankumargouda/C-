#include<iostream>
using namespace std;
int main(){
    int sellingPrice,costPrice;
    cout<<"Enter The Cost Price Of The Product:";
    cin>>costPrice;
    cout<<"Enter The Selling Price Of The Product:";
    cin>>sellingPrice;
    float profit,loss;
    float percentage;
    if(costPrice<sellingPrice){
       profit=sellingPrice-costPrice;
       cout<<"Profit Is:"<<profit<<endl;
       percentage=profit/(costPrice/100);
       cout<<"Profit In Percentage Is:"<<percentage<<"%"<<endl;
    }else if(costPrice==sellingPrice){
       cout<<"There Is No Profit & No Loss.";
    }else{
        loss=costPrice-sellingPrice;
         cout<<"Loss Is:"<<loss<<endl;
        percentage=loss/(costPrice/100);
       cout<<"Loss In Percentage Is:"<<percentage<<"%"<<endl;
    }
    return 0;
}