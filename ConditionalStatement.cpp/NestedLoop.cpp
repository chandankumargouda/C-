#include<iostream>
using namespace std;
int main(){
    int mark;
    cout<<"Enter Your Mark";
    cin>>mark;
    if(mark>=91){
        cout<<"Excelent";
    }else{
        if(mark>=81){
            cout<<"Very Good";
        }else{
            if(mark>=71){
                cout<<"Good";
            }else{
                if(mark>=61){
                    cout<<"Can Do Better";
                }else{
                    if(mark>=51){
                        cout<<"Average";
                    }else{
                        if(mark>=41){
                            cout<<"Below Average";
                        }else{
                            cout<<"fail";
                        }
                    }
                }
            }
        }
    }
    return 0;
}