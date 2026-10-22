#include "RPG.h"
#include <string> 
using namespace std;
RPG::RPG(){
name = "NPC";
hits_taken = 0;
luck = 0.1;
exp = 50.0;
level = 1;

}

RPG::RPG(string name, int hits_taken, float luck, float exp, int level){
this->name = name;
this->hits_taken = hits_taken;
this->luck = luck;
this->exp = exp;
this->level = level;
}

string RPG::getName() const{
return name; 
}

int RPG::getHitsTaken() const{
    return hits_taken;
}

float RPG::getLuck() const{
    return luck;
}

float RPG::getEXP() const {
    return exp;
}

int RPG::getLevel() const {
    return level; 
}

void RPG::setHitsTaken(int new_hits){
    hits_taken = new_hits;
}

bool RPG::isAlive()const{
    return hits_taken < MAX_HITS_TAKEN;
}

void RPG::setName(string name){
    this->name = name;
}

void RPG::updateEXPLevel(){
    exp += 50;
    if(exp >= 100){
        level++;
        exp = 0;
        luck += 0.01;
    }
}

void RPG::attack(RPG*opponent){
    
    random_device rd; 
    mt19937 gen(rd());
    uniform_real_distribution<> dis(0.0, 1.0);

    float random_num = dis(gen);
    bool hit; 
    if (random_num > HIT_FACTOR * opponent->getLuck()){
        hit = true; 
        updateHitsTaken(opponent);
    }
}

void RPG::printStats(){
printf("Name:" ge)

}