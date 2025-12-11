#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* right;
    Node* left;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* first;
void display(Node* root){
    if(root==NULL) return ;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
Node* find(Node* root,int start){
    if(root==NULL) return 0 ;
    if(root->val==start){
       first=root;
        return first;
    }
    find(root->left,start);
    find(root->right,start);
}
void markParent(Node* root,unordered_map<Node*,Node*>&parent){
    if(root==NULL)return;
    if(root->left)parent[root->left]=root;
    if(root->right)parent[root->right]=root;
    markParent(root->left,parent);
    markParent(root->right,parent); 
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
    int start=3;
    first=find(a,start);
    unordered_map<Node*,Node*>parent;
    markParent(a,parent);
    unordered_set<Node*>s;//isinefected
    s.insert(first);
    queue<pair<Node*,int>>q;
    q.push({first,0});
    int maxLevel=0;
    //bfs
    while(q.size()>0){
        pair<Node*,int>p=q.front();
        q.pop();
        int level=p.second;
        maxLevel=max(maxLevel,level);
        Node* temp=p.first;
        if(temp->left){
            if(s.find(temp->left)==s.end()){
                q.push({temp->left,level+1});
                s.insert(temp->left);
            }
        }
        if(temp->right){
            if(s.find(temp->right)==s.end()){
                q.push({temp->right,level+1});
                s.insert(temp->right);
            }
        }
        if(parent.find(temp)!=parent.end()){
            if(s.find(parent[temp])==s.end()){
                q.push({parent[temp],level+1});
                s.insert(parent[temp]);
            }
        }
    }
    cout<<maxLevel;
}