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
int level(Node* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
void levelOrd(Node* root,int curr,int level,vector<int> &ans){
    if(root==NULL) return ;
    if(curr==level){
        ans[curr]=root->val;
    }
    levelOrd(root->left,curr+1,level,ans);
    levelOrd(root->right,curr+1,level,ans);
}
void allLevOrd(Node* root,vector<int> &ans){
    int n=ans.size();
    for(int i=0;i<n;i++){
        levelOrd(root,0,i,ans);
    }
}
void BTRight(Node* root){
    vector<int>ans(level(root),0);
    allLevOrd(root,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
void preorder(Node* root,vector<int>& ans,int level){
    if(root==NULL) return;
    ans[level]=root->val;
    preorder(root->left,ans,level+1);
    preorder(root->right,ans,level+1);
}
void rightSideV(Node* root){
    vector<int>ans(level(root),0);
    preorder(root,ans,0);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
void prorder(Node* root,vector<int>& ans,int level){
    if(root==NULL) return;
    ans[level]=root->val;
    prorder(root->right,ans,level+1);
    prorder(root->left,ans,level+1);
}
void leftSideV(Node* root){
    vector<int>ans(level(root),0);
    prorder(root,ans,0);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
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
    Node* h=new Node(8);
    Node* i=new Node(9);
    Node* j=new Node(10);
    Node* k=new Node(11);
    Node* l=new Node(12);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    d->left=h;
    e->left=i;
    e->right=j;
    g->left=k;
    g->right=l;

    display(a);
    cout<<endl;
    BTRight(a);
    cout<<endl;
    rightSideV(a);
    cout<<endl;
    leftSideV(a);
}