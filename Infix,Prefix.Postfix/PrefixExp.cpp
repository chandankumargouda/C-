#include<iostream>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
string solve(string val1,string val2,char ch){
    //we have store preffix in the ans
    string s="";
    s.push_back(ch);
    s+=val1;
    s+=val2;
    return s;
}
int main(){
    string s="2+6*4/8-3";
    stack<string>val;
    stack<char>op;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }else{
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(')  op.push(s[i]);
            else if(op.top()=='(')  op.push(s[i]);
            else if(s[i]==')'){//priority s[i]<=priority[op.top()]
                while(op.top()!='('){
                    char ch=op.top();
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop();// opening bracket ko bh uda diya
            }else if(prio(s[i])>prio(op.top()))  op.push(s[i]);
            else{//priority s[i]<=priority[op.top()]
                while(op.size()>0 && prio(s[i])<=prio(op.top())){
                    // i have to do val1 and val2
                    char ch=op.top();
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans=solve(val1,val2,ch);
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
        string val2=val.top();
        val.pop();
        string val1=val.top();
        val.pop();
        string ans=solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<"Infix Expression : "<<s<<endl;
    cout<<"Prefix Expression : "<<val.top()<<endl;
}