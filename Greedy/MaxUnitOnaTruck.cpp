#include<bits/stdc++.h>
using namespace std;
bool cnp(vector<int>&a,vector<int>&b){
    return a[1]>b[1];
}
int maxUnitTruck(vector<vector<int>>&boxType,int truckSize){
    sort(boxType.begin(),boxType.end(),cnp);
    int profit=0;
    for(int i=0;i<boxType.size();i++){
         if(boxType[i][0]<=truckSize){
            profit+=boxType[i][0]*boxType[i][1];
            truckSize-=boxType[i][0];
         }else{
            profit+=truckSize+boxType[i][1];
            truckSize=0;
         }
         if(truckSize==0) break;
    }
    return profit;
}
int main(){
    vector<vector<int>> boxType={{1,3},{2,2},{3,1}};
    int truckSize=4;
    cout<<maxUnitTruck(boxType,truckSize);
    return 0;
}