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
int level(Node* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
void preorder(Node* root,int cur,int level){
    if(root==NULL) return;
    if(level==cur){
        cout<<root->val<<" ";
        return;
    }
    preorder(root->right,cur+1,level);
    preorder(root->left,cur+1,level);
}
void levelOrder(Node* root){
    int n=level(root);
    for(int i=1;i<=n;i++){
        preorder(root,1,i);
        cout<<endl;
    }
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    // preorder(a,1,3);
    // cout<<endl;
    levelOrder(a);
}