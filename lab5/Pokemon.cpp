#include <iostream> 
#include "Pokemon.h"



Pokemon::Pokemon(){

    name = "unidentified";
    hp = 0;
    attack = 0;
    defense = 0;
    cout << "Default Constructor (Pokemon) \n";
}

Pokemon::Pokemon(string name, int hp, int att, int defense, vector<string> type){
    this->name = name;
    this->hp = hp;
    this->attack = att;
    this->defense = defense;
    this->type = type;
    cout << "Overloaded Constructor (Pokemon) \n";
}

void Pokemon::speak(){
    cout << "...." << endl; 
}

void Pokemon::printStats(){
    printf("Name:%s\t HP: %i\t Def: %i\t ATT: %i\n", name.c_str(), hp, defense, attack);
    cout<<"Type: ";
    for(int i = 0; i < type.size(); i++){
        cout<<type[i]<< "\t";
    }

    cout << endl;
}