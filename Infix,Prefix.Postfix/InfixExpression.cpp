#include<iostream>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
int solve(int val1,int val2,int ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else  return val1/val2;
}
int main(){
    string s="2+6*4/8-3";//infix expression
    //we need to stacks,1 for val1,one for ops
    stack<int>val;
    stack<int>op;
    for(int i=0;i<s.length();i++){
        //we check if s[i] is a digit (0-9)
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        }else{//s[i] it is ->*,/,+,-
            if(op.size()==0 || prio(s[i])>prio(op.top()))
            op.push(s[i]);
            else{//priority s[i]<=priority[op.top()]
                while(op.size()>0 && prio(s[i])<=prio(op.top())){
                    // i have to do val1 and val2
                    char ch=op.top();
                    op.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    //the operator stack can have values
    //so make it empty
    while(op.size()>0){
        char ch=op.top();
        op.pop();
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        int ans=solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top()<<endl;
}