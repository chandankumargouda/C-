#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1,2,2,1,1,3};
    unordered_map<int,int>map;
    for(int i=0;i<arr.size();i++){
        map[arr[i]]++;
    }
    for(auto ele : map){
        cout<<ele.first<<","<<ele.second<<endl;
    }
   unordered_set<int>set;
   for(auto x:map){
        int freq=x.second;
        if(set.find(freq)!=set.end()){
            cout<<"false";
        }else{
            set.insert(freq);
        }
   }
   cout<<"true";
}