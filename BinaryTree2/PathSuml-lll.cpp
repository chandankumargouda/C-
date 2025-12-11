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
void helper(Node* root,int sum,int &count){
    if(root==NULL) return;
       if(root->val==sum){
       count++;
    }
    helper(root->left,sum-(root->val),count);
    helper(root->right,sum-(root->val),count);
}
int pathSum(Node* root,int targetSum){
    if(root==NULL ) return 0;
    int count=0;
    helper(root,targetSum,count);
    count+=(pathSum(root->left,targetSum)+pathSum(root->right,targetSum));
    return count;
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
    cout<<pathSum(a,19);
}