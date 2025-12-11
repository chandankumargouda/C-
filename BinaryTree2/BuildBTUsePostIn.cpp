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
Node* build(vector<int>&post,int postlo,int posthi,vector<int>&in,int inlo,int inhi){
    if(posthi>postlo) return 0;
    Node* root=new Node(post[posthi]);
    if(posthi==posthi) return root;
    int i=inlo;
    while(i<=inhi){
        if(in[i]==post[posthi]) break;
        i++;
    }
    int leftCount=i-inlo;
    int rightCount=inhi-i;
    root->left=build(post,postlo,postlo+leftCount-1,in,inlo,i-1);
    root->right=build(post,postlo+leftCount,posthi,in,i+1,inhi);
    return root;
}
Node* buildTree(vector<int>&post,vector<int>&in){
    int n=post.size();
    Node* root=build(post,0,n-1,in,0,n-1);
    display(root);
}
int main() {
    vector<int> inorder = {3, 1, 4, 0, 5, 2};
    vector<int> postorder = {3,4,1,2,5,0};
    buildTree(postorder,inorder);
    return 0;
}