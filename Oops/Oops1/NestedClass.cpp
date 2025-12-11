#include<iostream>
using namespace std;
class Gun{
    public:
    int ammo;
    int damage;
    int scope;
};
class Player{
    private:
    // class Helmet{
    //     int hp;
    //     int level;
    //     public:
    //     int getHp(){
    //         return hp;
    //     }
    //     int getLevel(){
    //         return level;
    //     }
    //     void setHp(int hp){
    //         this->hp=hp;
    //     }
    //     void setLevel(int level){
    //         this->level=level;
    //     }
    // };
    int health;
    int age;
    int score;
    int alive;
    Gun gun;
   // Helmet helmet;
    public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int isAlive(){
        return alive;
    }
    Gun getGun(){
        return gun;
    }
    void setHealth(int health){
        this->health=health;
    }
    void setScore(int score){
        this->score=score;
    }
    void setAge(int age){
        this->age=age;
    }
    void setIsAlive(bool alive){
        this->alive=alive;
    }
    void setGun(Gun gun){
        this->gun=gun;
    }
    // void setHelmet(int level){
    //     Helmet *helmete=new Helmet;
    //     helmet->setLevel(level);
    //     int health;
    //     if(level==1)
    //        health=25;
    //     else if(level==2)
    //        health=50;
    //     else if(level==3 )
    //         health=100;
    //     else
    //        cout<<"Error! invalid level";
    //        helmet->setHp(health);  
    //        this->helmet=*helmet;    
    // }
};
int main(){
    Player harsh;
    Player raghav;

    Gun akm;
    akm.ammo=100;
    akm.damage=50;
    akm.scope=2;

    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setIsAlive(true);
    harsh.setHealth(70);
    harsh.setGun(akm);
    //harsh.setHelmet(2);
    cout<<harsh.getAge()<<endl;
    cout<<harsh.getScore()<<endl;
    cout<<harsh.getHealth()<<endl;
    //cout<<harsh.getGun()<<endl;

    Gun awm;
    awm.ammo=100;
    awm.damage=50;
    awm.scope=8; 

    raghav.setAge(22);
    raghav.setScore(120);
    raghav.setIsAlive(true);
    raghav.setHealth(100);
    raghav.setGun(awm);
    // raghav.setHelmet(3);
    cout<<raghav.getAge()<<endl;
    cout<<raghav.getScore()<<endl;
    cout<<raghav.getHealth()<<endl;
    //cout<<raghav.getGun()<<endl;

}