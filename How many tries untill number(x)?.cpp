#include "iostream"
#include "ctime"
#include "unistd.h"
#include "vector"
using namespace std;


void arpa(){
cout << "How many tries until number(x)?\n";
cout << "Please Pick a number 0-20 :";
srand(time(NULL));
int y = 0;
int z;
cin >> z;
while(true){
int x = rand() % 20;
sleep(1);
if (x != 20){
cout << "Number " << x << "\n";   
y += 1;
}
if (x == z){
cout << "Nro : " << z << "\n";
cout << "It took : " << y << " times\n";
return;
}
}
}
int main(){
vector<string> ok = {"How many tries until number X (1)", "Exit (2)"};    
int x;
cout << ok[0] << " " << ok[1] << "\n";
while(true){
cin >> x;
if (x == 1){
arpa();
}
if (x == 2){
cout << "Exit\n";
}
break;
}
}
