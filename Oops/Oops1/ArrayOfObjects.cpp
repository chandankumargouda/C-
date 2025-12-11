#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int age;
    int noOfTestMatch;
    int avgScore;
};
int main(){
    Cricketer virat;
    virat.name="Virat";
    virat.age=36;
    virat.noOfTestMatch=100;
    virat.avgScore=56;

    Cricketer dhoni;
    dhoni.name="Dhoni";
    dhoni.age=46;
    dhoni.noOfTestMatch=140;
    dhoni.avgScore=36;

    Cricketer cricketer[2]={virat,dhoni};
    for(int i=0;i<2;i++){
        cout<<cricketer[i].name<<endl;
        cout<<cricketer[i].age<<endl;
        cout<<cricketer[i].noOfTestMatch<<endl;
        cout<<cricketer[i].avgScore<<endl;
    }

}