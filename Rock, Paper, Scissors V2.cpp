#include "bits/stdc++.h"
#include "unistd.h"
using namespace std;

void geim(){

int bwins = 0;
int bloses = 0;
int loses = 0;
int wins = 0;
string x[]={"rock","paper","scissors"};
string y;
string h;
cout << "Rock Paper or Scissors?\n";
cout << "Select: ";
while(true){
srand(time(NULL));
cin >> y;
int n = rand() % 3;
if (x[n] == y){
cout << "Opponent: " << x[n] << "\n";
cout << "Tie!\n";
ties++;
}
else if (bwins == 4 || loses == 4){
cout << "Game Over\n";
cout << "Opponent: " << " " << "You:" << "\n";
cout << "Wins: " << bwins << "    Wins: " << wins << "\n";
cout << "Loses: " << bloses << "  Loses: " << loses << "\n";
cout << "\n";
cout << "Play Again y/N ? ";
cin >> h;
if (h == "y" || h == "Y"){
geim();    
}
else if (h == "n" || h == "N"){
cout << "Exit\n";
sleep(2);
return;
}
}
else if (bloses == 4 || wins == 4){
cout << "You Won!!\n";
cout << "Opponent: " << " " << "  You:" << "\n";
cout << "Wins: " << bwins << "    Wins: " << wins << "\n";
cout << "Loses: " << bloses << "  Loses: " << loses << "\n";
cout << "\n";
cout << "Play Again y/N ? ";
cin >> h;
if (h == "y" || h == "Y"){
geim();    
}
else if (h == "n" || h == "N"){
cout << "Exit\n";
sleep(2);
return;
}
}
else if (y == "paper" && x[n] == "rock"){
cout << "Opponent: " << x[n] << "\n";
cout << "Win!\n";
wins += 1;
bloses += 1;
}
else if (y == "paper" && x[n] == "scissors"){
cout << "Opponent: " << x[n] << "\n";
cout << "You lose\n";  
loses += 1;
bwins += 1;  
}
else if (y == "rock" && x[n] == "scissors"){
cout << "Opponent: " << x[n] << "\n";
cout << "Win!\n";
wins += 1;
bloses += 1;
}
else if (y == "rock" && x[n] == "paper"){
cout << "Opponent: " << x[n] << "\n";
cout << "You Lose\n";
loses += 1;
bwins += 1;
}
else if (y == "scissors" && x[n] == "rock"){
cout << "Opponent: " << x[n] << "\n";
cout << "You Lose\n";
loses += 1;
bwins += 1;
}
else if (y == "scissors" && x[n] == "paper"){
cout << "Opponent: " << x[n] << "\n";
cout << "Win!\n";
wins += 1;
bloses +=1;
}
}
}
int main(){
int se;
string ye[] ={"Rock Paper Scissors(1)"," Exit(2)"};
cout << ye[0] << ye[1] << "\n";
cin >> se;
if (se == 1){
geim();
}
else if (se == 2){
cout << "Exit\n";
sleep(2);
return 0;
}
}
