#include<iostream>
using namespace std;
class student{
    int id;
    string name;
    public:
  void setId(int i){
    id=i;
 }
  int getId(){
    return id;
 }
  void setName(string n){
    name=n;
 }
  string getName(){
    return name;
 }
};
int main(){
    student chandu;
    chandu.setId(23);
    cout<<chandu.getId();
    chandu.setName("chandan");
    cout<<chandu.getName();
}