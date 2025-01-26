#include <iostream>
using namespace std;

class Hero{
    private:
    int health;
     public:
    char level;

int getHealth(){
    return health;
}

void setHealth(int h){
    health = h;
}

char getLevel(){
    return level;
}

void setLevel(char c){
    level = c;
}

string crush;

string getCrush(){
    return crush;
}

void setCrush(string s){
 crush = s;
}
};

int main(){
cout << endl;

Hero Eren;

Eren.setHealth(99);
Eren.setLevel('A');
Eren.setCrush("Mikasa");

cout<< "Eren's health is " << Eren.getHealth() << endl;
cout<< "Eren's level is " << Eren.getLevel() << endl;
cout<< "Eren's crush is " << Eren.getCrush() << endl;

cout << endl;

Hero Mikasa;

Mikasa.setHealth(100);
Mikasa.setLevel('S');
Mikasa.setCrush("Eren");

cout<< "Mikasa's health is " << Mikasa.getHealth() << endl;
cout<< "Mikasa's level is " << Mikasa.getLevel() << endl;
cout<< "Mikasa's crush is " << Mikasa.getCrush() << endl;

}