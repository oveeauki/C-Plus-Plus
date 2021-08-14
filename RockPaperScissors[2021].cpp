#include "bits/stdc++.h"
#include "unistd.h"
#include "stdlib.h"

using namespace std;

namespace init{
volatile bool _init_ = 1;
string opt[]{
"rock",
"paper",
"scissors" };
short ties = 0;
short npcwins = 0;
short playerwins = 0;
short playerloses = 0;
short npcloses = 0;
}

void clear(void){
#ifdef __linux__
system("clear");
#endif
#ifndef __linux__
system("cls");
#endif
}

void winner(void){
clear();
if(init::playerwins == 3 && init::playerwins > init::npcwins){
cout<<"Player wins!"<<endl;
sleep(3);
init::_init_ = 0;
}
else if(init::npcwins == 3 && init::npcwins > init::playerwins){
cout<<"NPC wins!"<<endl;
sleep(3);
init::_init_ = 0;
}
}

void statsshow(void){
clear();
cout << "Ties: " << init::ties << endl
     << "NPC Wins: " << init::npcwins << endl
     << "Player Wins: " << init::playerwins << endl
     << "Player Loses: " << init::playerloses << endl
     << "NPC Loses: " << init::npcloses << endl;
}

const int rockpaperscissors(string usel){
srand(time(NULL));
short npcxd = rand() % 3;
if(usel == init::opt[npcxd]){
cout <<  "You Selected : [" << usel << "]\nNpc Selected : [" << init::opt[npcxd] << "]\n\n"  << "Tie !\n";
init::ties++;
sleep(3);
}
else if(usel == "rock" && init::opt[npcxd] == "paper" || usel == "scissors" && init::opt[npcxd] == "rock"){
cout << "You Selected : [" << usel << "]\nNpc Selected : [" << init::opt[npcxd] << "]\n\n" << "You lose and npc wins xd\n"; 
init::npcwins++;
init::playerloses++;
sleep(3);
}
else if(usel == "paper" && init::opt[npcxd] == "scissors"){
cout << "You Selected : [" << usel << "]\nNpc Selected : [" << init::opt[npcxd] << "]\n\n" << "You lose and npc wins xd\n";
init::npcwins++;
init::playerloses++;
sleep(3);
}
else if(usel == "rock" && init::opt[npcxd] == "scissors"||usel == "scissors" && init::opt[npcxd] == "paper"){
cout << "You Selected : [" << usel << "]\nNpc Selected : [" << init::opt[npcxd] << "]\n\n" << "You win and npc loses xd\n";
init::playerwins++;
init::npcloses++;
sleep(3);
}
else if(usel == "paper" && init::opt[npcxd] == "rock"){
cout << "You Selected : [" << usel << "]\nNpc Selected : [" << init::opt[npcxd] << "]\n\n" << "You win !\n";
init::playerwins++;
init::npcloses++;
sleep(4);
}
statsshow();
sleep(3);
winner();
return npcxd;
}

void checkwords(string usel){
if(usel == "rock" || usel == "paper" || usel == "scissors"){
rockpaperscissors(usel);
}
else if(usel == "exit"){
cout << "Bye!\n";
sleep(3);
init::_init_ = 0;
}
else{
cout << "Please Enter Either one of these words 'rock','paper' or 'scissors'\n";
cout << "You Entered : [" << usel << "]\n";
sleep(4);
clear();
}
}

signed main(void){
clear();
string usel;
while(init::_init_){
cout << "Rock Paper Scissors\n~ " << flush;
cin >> usel;
checkwords(usel);
}
}
