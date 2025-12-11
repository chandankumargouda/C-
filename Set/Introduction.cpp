#include<iostream>
#include<unordered_set>//insert,search,delet-O(1)
using namespace std;
int main(){
    unordered_set<int>set;
    set.insert(10);
    set.insert(20);
    set.insert(30);
    set.insert(40);
    set.insert(4);
    set.insert(10);//dosen't count duplicate ele
    cout<<set.size()<<endl;
    //for each loop
    for(int ele:set){
        cout<<ele<<" ";
    }
    set.erase(10);
    cout<<endl;
    for(int ele:set){
        cout<<ele<<" ";
    }
    cout<<endl;
    int target=4;
    //set.find()-> it searches in the set and if
    //it is not found then it returns the last element
    if(set.find(target)!=set.end()){//target exists
        cout<<"exists";
    }else{
        cout<<"Dosen't Exists";
    }
}