#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;//leetcode=455
int main(){
    int grid[]={7,8,9,10};
    int coki[]={5,6,7,8};
    int n1=sizeof(grid)/sizeof(grid[0]);
    int n2=sizeof(coki)/sizeof(coki[0]);
    // sort(coki.begin(),coki.end());
    // sort(grid.begin(),grid.end());
    int count=0;
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(grid[i]<=coki[j]){
        count++;
        j++;
        i++;
    }else j++;
    }
    cout<<count;
}