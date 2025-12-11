#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1,3,3,2,2};
    int n=arr.size();
    vector<int>ans;
    unordered_map<int,int>map;
    for(int ele: arr){
        map[ele]++;
    }
    for(int i=100;i<=999;i+=2){
        int x=i;
        int a=x%10;//ones place digit
        x/=10;
        int b=x%10;//tens place 
        x/=10;
        int c=x;//hundred place
        if(map.find(a)!=map.end()){
            map[a]--;
            if(map[a]==0) map.erase(a);
            if(map.find(b)!=map.end()){
                map[b]--;
                if(map[a]==0) map.erase(a);
                if(map.find(c)!=map.end()){
                    ans.push_back(i);
                }
                map[b]++;
            }
            map[a]++;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}