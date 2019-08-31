#include <iostream>
using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
    
public:
    void set_name(std::string name_val){
        name = name_val;
    }
    //overloaded constructors
    Player(){
        cout<<"No args costructor called" << endl;
    }
    Player(std::string name){
        cout<<"String arg constructor called" << endl;
    }
    Player(std::string name, int health, int xp){
        cout <<"Three args constructors called" << endl;
    }
    ~Player(){
        cout <<"Destructor called for " << name << endl;
    }
};

int main(){
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    
    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        Player villian("Villian", 100, 12);
        villian.set_name("Villian");
    }
    
    player *enemy = new Player;
    enemy ->set_name("Enemy");
    
    Player *level_boss = new Player ("Level Boss", 100, 300);
    level_boss->set_name("Level Boss");
    
    delete enemy;
    delete level_boss;
    
    return 0;
}