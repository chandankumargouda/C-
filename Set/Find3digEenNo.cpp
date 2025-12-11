#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1,3,4,2};
    int n=arr.size();
    vector<int>ans;
    unordered_set<int>set;
    for(int i=0;i<n;i++){
        set.insert(arr[i]);
    }
    for(int i=100;i<=999;i+=2){
        int x=i;
        int a=x%10;//ones place digit
        x/=10;
        int b=x%10;//tens place 
        x/=10;
        int c=x;//hundred place
        if(set.find(a)!=set.end()){
            set.erase(a);
            if(set.find(b)!=set.end()){
                set.erase(b);
                if(set.find(c)!=set.end()){
                    ans.push_back(i);
                }
                set.insert(b);
            }
            set.insert(a);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}