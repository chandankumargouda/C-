#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void display(Node* root){
    if(root==NULL) return ;
    display(root->left);
    cout<<root->val<<" ";
    display(root->right);
}
Node* buildBalanceTree(vector<int>&arr,int lo,int hi){
    if(lo>hi) return 0;
    int mid=lo+(hi-lo)/2;
    Node* root=new Node(arr[mid]);
    root->left=buildBalanceTree(arr,lo,mid-1);
    root->right=buildBalanceTree(arr,mid+1,hi);
    //return root;
    display(root);
}
int main(){
   vector<int>arr={1,2,3,4,5,6,7};
    buildBalanceTree(arr,0,arr.size()-1);
}