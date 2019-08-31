#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player{
    public:
  //attributes
  string name;
  int health;
  int xp;
  
 //methods
 void talk(string text_to_say){
     cout << name <<" says: "<< text_to_say << endl;
     }
 bool is_dead();
};

class Account{
    public:
    string name;
    double balance;
    
    bool deposit(double bal){
        balance+=bal;
        cout <<"In deposit" << endl;
        }
    bool withdraw(double bal){
        balance -= bal;
         cout <<"In withdraw" << endl;
        }
 };
int main (){
    Account frank_account;
    frank_account.name = "Franks account";
    frank_account.balance = 5000.0;
    
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);
    
    
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there");
    
    Player *enemy = new Player;
    (*enemy).name = "Enemy";//same
    (*enemy).health = 100;
    enemy->xp = 15;//same
    
    enemy->talk("I will destoy you!");
    
    
    return 0;
}