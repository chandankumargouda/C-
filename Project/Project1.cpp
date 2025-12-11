/*you are tasked with implementing a simple number gussing gam in c++ involving a 
    gusser, three playes and one umpire .the game oporates as follw:
Guesser:this entity will guess the number. x_.4
Player: Each of the three player will guess a number . 3 players p1->2,p2_>4,p3_>2
Umpire: This entity will collect the guesser from the guesser ad the player and 
    determine which player .if any have guessed the same number as the guesser.
    
Classes->guesser,umpire,player
main functios:1.Create a umpire
              2.get the number from guesser
              3.get the number from all the three player
              4.print the result of the game
              5.end the game
*/

#include<bits/stdc++.h>
using namespace std;
class Guesser{
    int guessNum;
    public:
    int takeGuessNum(){
        int x;
        cout<<"Give the number for the Guesser:";
        cin>>x;
        guessNum=x;
        return guessNum;
    }
};
class Player{
    int playerNum;
    public:
    int takeplayerNum(){
        int x;
        cin>>x;
        playerNum=x;
        return playerNum;
    }
};
class Umpire{
    public:
    int g;
    int p1Num;
    int p2Num;
    int p3Num;
    void takeTheNoFromGuesser(){
        Guesser g1;
        g=g1.takeGuessNum();
    }
    void takeTheNoFromPlayer(){
        Player p1;
        cout<<"Give the number guessed by the Player1:";
        p1Num=p1.takeplayerNum();

        Player p2;
        cout<<"Give the number guessed by the Player2:";
        p2Num=p2.takeplayerNum();

        Player p3;
        cout<<"Give the number guessed by the Player3:";
        p3Num=p3.takeplayerNum();
    }
    void printThrResult(){
        if(g==p1Num){
            if(g==p2Num){
                if(g==p3Num){
                    cout<<"Player 1,2,3 has won"<<endl;
                }else{
                    cout<<"Player 1 and 2  both has win"<<endl;
                }
            }else{
                cout<<"Player1 was won"<<endl;
            }
        }else if(g==p2Num){
            if(g==p3Num){
                cout<<"Both Player 2 and 3 has won"<<endl;
            }else{
                cout<<"player2 was win"<<endl;
            }
        }else if(g==p3Num){
            cout<<"Player3 win"<<endl;
        }else{
            cout<<"None of them win the game"<<endl;
        }
    }

};
int main(){
    cout<<"......Let's start The Game......"<<endl;
    Umpire u;
    u.takeTheNoFromGuesser();
    u.takeTheNoFromPlayer();
    u.printThrResult();
    cout<<"......Let's End The Game......"<<endl;
    return 0;
}