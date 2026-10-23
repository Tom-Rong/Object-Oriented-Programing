#ifndef Game_H
#define Game_H
using namespace std;
#include <vector>
#include <set>
#include "RPG.h"

class Game{

public:
Game();
Game(vector<RPG*> players, set<int> live_players );    

//mutators
void generatePlayers(int n);
void endRound(RPG* winner, RPG* loser, int loserindex);
void battleRound();
void gameLoop(); 
void printFinalResults(); 

//accessors
int selectPlayer();
~Game();


private: 
vector<RPG*> players;
set<int> live_players;
}; 
#endif 
