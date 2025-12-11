#include<iostream>
using namespace std;//leetcode=69
int main(){
    int x=20;
    int low=0;
    int high=x;
    bool flag=false;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid*mid==x) {
            flag=true;
            cout<<mid;
            break;
        }
        else if(mid*mid>x) high=mid-1;
        else low=mid+1;
    }
    if(flag==false) {
        cout<<x<<" Is Not A Square Number."<<endl;
        cout<<high<<"  it Is Nearly equal to "<<x;
    }
    return 0;
}