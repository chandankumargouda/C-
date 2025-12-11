#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>map;//<key,value>
    pair<string,int>p1;
    p1.first="Chandan";
    p1.second=27;
    pair<string,int>p2;
    p2.first="Chudamani";
    p2.second=28;
    map.insert(p1);
    map.insert(p2);
    map["amit"]=8;
    map["Deepak"]=24;
    for(auto ele:map){//auto->pair<string,int>
        cout<<ele.first<<":-"<< ele.second<<endl;
    }
    map.erase("Deepak");
    cout<<endl;
    for(auto ele:map){//auto->pair<string,int>
        cout<<ele.first<<":-"<< ele.second<<endl;
    }
    cout<<endl;
    cout<<map.size()<<endl;
    string target="Chandan";
    if(map.find(target)!=map.end()){
        cout<<"It Exists.";
    }else{
        cout<<"It dosen't Exists";
    }
}