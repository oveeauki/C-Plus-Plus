// going to make this better someday.

#include "iostream"
#include "ctime"
#include "unistd.h"
#include "vector"

using namespace std;

void geimi(){
srand(time(NULL));
string x[] = {"rock","paper","scissors"};
string y;
cout << "rock,paper or scissors? ";  
while(true){
cin >> y;
int a = rand() % 2;
cout << x[a] << "\n";
if (y == x[a]){
cout << "Tie!\n";    
}
else if (y == "rock" && x[a] == "paper"){
cout << "You lose\n";
}
else if (y == "rock" && x[a] == "scissors"){
cout << "You Won\n";
}
else if (y == "paper" && x[a] == "scissors"){
cout << "You lose\n";
}
else if (y == "paper" && x[a] == "rock"){
cout << "You Won\n";
}
else if (y == "scissors" && x[a] == "rock"){
cout << "You lose\n";
}
else if (y == "scissors" && x[a] == "paper"){
cout << "You Won\n";
}
}
}
int main(){
int x;
vector<string> ok = {"Rock,Paper,Scissors(1)"," Exit(2)"};
cout << ok[0] << ok[1] << "\n";
while(true){
cin >> x;
if (x == 1){
geimi();
}
if (x == 2){
cout << "Exit\n";
sleep(1);
return 0;
}
}
}
