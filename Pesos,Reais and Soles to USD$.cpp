#include "iostream"
#include "unistd.h"
#include "vector"

using namespace std;



void currency(){
vector<string> ok = {"Pesos,Reais and Soles to USD$ (1) ", "Exit (2)"};
double pesos2;
double pesos;
double reais2;
double reais;
double soles2;
double soles;
cout << "Enter number of Colombian Pesos: ";
cin >> pesos;
cout << "Enter number of Brazilian Reais: ";
cin >> reais;
cout << "Enter number of Peruvian Soles: ";
cin >> soles;
pesos2 = (pesos*0.00027);
reais2 = (reais*0.18);
soles2 = (soles*0.28);
cout << "USD$ = " << (pesos2+reais2+soles2) << "\n";
cout << " " << "\n";
cout << ok[0] << ok[1] << "\n";
}
int main(){
vector<string> ok = {"Pesos,Reais and Soles to USD$ (1) ", "Exit (2)"};
int x;
cout << ok[0] << ok[1] << "\n";
while(true){
cin >> x;
if (x == 1){
currency();
} 
if (x == 2){
cout << "Exit\n";
return 0;
}
}
}























