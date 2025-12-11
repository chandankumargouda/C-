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
void helper(Node* root,vector<int>v,vector<vector<int>>&ans,int sum){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
       if(root->val==sum){
        v.push_back(root->val);
        ans.push_back(v);
       }
       return;
    }
    v.push_back(root->val);
    helper(root->left,v,ans,sum-(root->val));
    helper(root->right,v,ans,sum-(root->val));
}
void pathSum(Node* root,int targetSum){
    vector<vector<int>>ans;
    vector<int>v;
    helper(root,v,ans,targetSum);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
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
    pathSum(a,22);
}