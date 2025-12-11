#include<bits/stdc++.h>
using namespace std;
//timeComlexity->bc=O(log(n))
//               wc/ac=O(n)   
//SpaceComlexity->bc=O(log(n))
//               wc/ac=O(n)   
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
    display(root->left);
    cout<<root->val<<" ";
    display(root->right);
}
int searchBSTEle(Node* root,int val){
    if(root->val==val) return root->val;
    else if(root->val<val){
        searchBSTEle(root->right,val);
    }else if(root->val>val){
        searchBSTEle(root->left,val);
    }
}
void insertion(Node* root,int val){
    if(val<root->val){
        if(root->left==NULL){
            Node* temp=new Node(val);
            root->left=temp;
        }else insertion(root->left,val);
    }else if(val>root->val){
        if(root->right==NULL){
            Node* temp=new Node(val);
            root->right=temp;
        }else insertion(root->right,val);
    }
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

    display(a);
    cout<<endl;
    // cout<<searchBSTEle(a,20);
    // cout<<endl;
    insertion(a,11);
    cout<<endl;
    display(a);
}