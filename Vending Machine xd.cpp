//vitun Kola Masiina
#include "iostream"
#include "vector"
#include "unistd.h"
using namespace std;
int main () {

int kola;

vector<string> ok ={"Soda 1 (1) " ,"Soda 2 (2) " ,"Soda 3 (3) " ,"Soda 4 (4) " ,"Soda 5(5)"};
cout << ok[0] << ok[1] << ok[2] << ok[3] << ok[4] << "\n";
cout << "Select Soda : ";
while(true){
cin >> kola;
if (kola == 1){
cout << "Soda1 3$\n";
}
if (kola == 2){
cout << "Soda 2 2$\n";
}
if (kola == 3){
cout << "Soda 3 4$\n";    
}
if (kola == 4){
cout << "Soda 4 3.1$\n";
}
if (kola == 5){
cout << "Soda 5 3.3$\n";    
}
else if (kola < 1 || kola > 5) {
cout << "Error! Selected number out of range. \n";
sleep(3);
return 0;
}
}
}
