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
    display(root->left);
    cout<<root->val<<" ";
    display(root->right);
}
void MorrisTrav(Node* root){
    vector<int>ans;
    Node* curr=root;
    while(curr!=NULL){
        if(curr->left!=NULL){//find the pred
        Node* pred=root->left;
        while(pred->right!=NULL && pred->right!=curr){
            pred=pred->right;
        }
        if(pred->right==NULL){//Link
            pred->right=curr;
            curr=curr->left;
        }else{//pred->right =curr:unlike
            pred->right=NULL;
            ans.push_back(curr->val);
            curr=curr->right;
        }
    }else{//curr->left=NULL
        ans.push_back(curr->val);
        curr=curr->right;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(5);
    Node* c=new Node(20);
    Node* d=new Node(2);
    Node* e=new Node(8);
    Node* f=new Node(15);
    Node* g=new Node(25);
    Node* h=new Node(4);
    Node* i=new Node(12);
    Node* j=new Node(3);
    Node* k=new Node(13);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    d->right=h;
    h->left=j;
    f->left=i;
    i->right=k;

    //display(a);
    MorrisTrav(a);
}  