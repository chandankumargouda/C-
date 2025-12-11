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
 void levelOrdQueue(Node* root){
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
 }
 void leftBondary(Node* root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) return;
       cout<<root->val<<" ";
       leftBondary(root->left);
    if(root->left==NULL)
    leftBondary(root->right);
 }
 void leafBondary(Node* root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL)cout<<root->val<<" ";
    leafBondary(root->left);
    leafBondary(root->right);
 }
 void rightBondary(Node* root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) return;
    rightBondary(root->right);
    if(root->right==NULL)
    rightBondary(root->left);
    cout<<root->val<<" ";
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

    leftBondary(a);
    leafBondary(a);
    rightBondary(a->right);
}