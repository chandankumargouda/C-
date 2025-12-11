#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int reverse(int n){
    int sum=0;
    while(n>0){
        sum*=10;
        int a=n%10;
        sum+=a;
        n/=10;
    }
    return sum;
}
// int fact(int n){
//     int fact=1;
//     for(int i=1;i<n;i++){
//         fact*=i;
//     }
//     return fact;
// }
// int com(int n,int r){
//     int com=0;
//     com=(fact(n))/(fact(n-r)*fact(r));
//     return com;
// }
int main(){
    vector<int>arr={13,10,35,24,76};
    int n=arr.size();
    int count=0;
    unordered_map<int,int>map;
    for(int i=0;i<n;i++){
        arr[i]-=reverse(arr[i]);
    }
    for(int i=0;i<n;i++){
        if(map.find(arr[i])!=map.end()){
            count+=map[arr[i]];
            map[arr[i]]++;
        }
        else map[arr[i]]++;
    }
    // for(auto x:map){
    //     int f=x.second;
    //     count+=com(f,2);
    // }
    cout<<count<<endl;

    //Brute Force
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+reverse(arr[j]))==(arr[j]+reverse(arr[i]))){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
    cout<<count;
}