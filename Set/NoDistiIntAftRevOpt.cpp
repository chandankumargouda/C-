#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int reverse(int n){
    int rev=0;
    while(n>0){
        rev=rev*10;
        int x=n%10;
        rev+=x;
        n=n/10;
    }
    return rev;
}
int main(){
    vector<int>arr={11,22,13,65,99,54,33,4};
    int n=arr.size();
    for(int i=0;i<n;i++){
        int rev=reverse(arr[i]);
        arr.push_back(rev);
    }
    unordered_set<int>set;
    for(int i=0;i<arr.size();i++){
        set.insert(arr[i]);
    }
    for(int ele:set){
        cout<<ele<<" ";
    }
    cout<<endl;
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<"The no. of Distinct No. in Array is:"<<" "<<set.size();
}