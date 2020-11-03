//kinda useless but good practice !
#include "bits/stdc++.h"
#include "unistd.h"

using namespace std;

int main(){
long int rang;
long int usel;
cout << "Select the number range you want to use (0-X): ";
cin >> rang;
if (rang <= 0){
cout << "Give number greater than 0...\n";
sleep(1);
cout << "Restarting...\n";
sleep(1);
main();
return 0;    
}
cout << "Now Select a number between (0-" << rang << "): ";
cin >> usel;
cout << "You picked Number " << usel << "\n";
if (usel > rang || usel < 0){
cout << "Selected number out of range... \n";
sleep(2);
cout << "Restarting\n";
sleep(1);
main();
return 0;
}
srand(time(NULL));
while(true){
int tries;    
sleep(1);
long arp = rand() % rang;
if (arp != usel){
cout << arp << "\n";
tries++;
}
else if (arp == usel){
cout << arp << "\n";
cout << "It took " << (tries+1) << " tries"  << "\n";
sleep(5);
break;
}
}
}