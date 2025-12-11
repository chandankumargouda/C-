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
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
bool exist(Node* root,Node* target){
    if(root==NULL) return false;
    if(root==target) return true;
    return exist(root->left,target) || exist(root->right,target);
}
Node* helper(Node* root,Node* p,Node* q){
    if(root==p || root==q) return root;
    else if(exist(root->left,p) && exist(root->right,q)) return root;
    else if(exist(root->right,p) && exist(root->left,q)) return root;
    else if(exist(root->left,p) && exist(root->left,q)) return helper(root->left,p,q);
    else return helper(root->right,p,q);
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    Node* h=new Node(8);
    Node* i=new Node(9);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    d->right=i;
    g->left=h;

    display(a);
    cout<<endl;
   cout<< helper(a,b,h);
}