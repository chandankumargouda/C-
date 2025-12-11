#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    set<int>set;
    map<int,int>map;
    set.insert(23);
    set.insert(9);
    set.insert(15);
    set.insert(4);
    for(auto ele:set){
        cout<<ele<<" ";
    }
    cout<<endl;
    map[4]=27;
    map[3]=2;
    map[5]=17;
    map[2]=7;
    for(auto ele:map){
        cout<<ele.first<<":"<<ele.second<<" ";
    }
}