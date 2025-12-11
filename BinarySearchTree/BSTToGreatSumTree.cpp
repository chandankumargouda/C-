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
int sum=0;
int display(Node* root){
    if(root==NULL) return 0;
    display(root->right);
    root->val+=sum;
    sum=root->val;
    display(root->left);
    return root->val;
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(5);
    Node* c=new Node(2);
    Node* d=new Node(8);
    Node* e=new Node(6);
    Node* f=new Node(15);
    Node* g=new Node(12);
    Node* h=new Node(18);
    Node* i=new Node(13);
    a->left=b;
    a->right=f;
    b->left=c;
    b->right=d;
    d->left=e;
    g->right=i;
    f->left=g;
    f->right=h;
    cout<<display(a);
}