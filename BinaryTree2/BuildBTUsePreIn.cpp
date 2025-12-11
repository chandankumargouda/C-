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
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
Node* build(vector<int>&pre,int prelo,int prehi,vector<int>&in,int inlo,int inhi){
    if(prelo>prehi) return 0;
    Node* root=new Node(pre[prelo]);
    if(prelo==prehi) return root;
    int i=inlo;
    while(i<=inhi){
        if(in[i]==pre[prelo]) break;
        i++;
    }
    int leftCount=i-inlo;
    int rightCount=inhi-i;
    root->left=build(pre,prelo+1,prelo+leftCount,in,inlo,i-1);
    root->right=build(pre,prelo+leftCount+1,prehi,in,i+1,inhi);
    return root;
}
Node* buildTree(vector<int>&pre,vector<int>&in){
    int n=pre.size();
    Node* root=build(pre,0,n-1,in,0,n-1);
    display(root);
}
int main() {
    vector<int> inorder = {3, 1, 4, 0, 5, 2};
    vector<int> preorder = {0, 1, 3, 4, 2, 5};
    buildTree(preorder,inorder);
    return 0;
}