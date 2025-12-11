#include<bits/stdc++.h>
using namespace std;
priority_queue<int>left;
priority_queue<int,vector<int>,greater<int>>right;
void addNumber(int num){
    if(left.size()==0 || num<left.top()) left.push(num);
    else right.push(num);

    if(abs(left.size()-right.size())>1){
        if(left.size()>right.size()){
            right.push(left.top());
            left.pop();
        }
        if(left.size()<right.size()){
            left.push(right.top());
            right.pop();
        }
    }
}
double findMedian(){
    if(left.size()==right.size()) return (left.top()+right.top())/2.0;
    else{
        if(left.size()>right.size()) return left.top();
        else return right.top();
    }
}
int main(){

}