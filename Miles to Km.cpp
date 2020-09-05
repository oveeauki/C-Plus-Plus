#include "iostream"
#include "unistd.h"

using namespace std;


void calculation(){
cout << "Enter Miles " ;
int x;
string a;
cin >> x;
cout << x << " Miles = " << (x*1.609344) << " Km "  << "\n";  
cout << "\n";
cout << "Calculate Again? (y/N) " << "\n";
cin >> a;
if (a == "y"){
calculation();
}
else if (a == "n"){
cout << "Exit\n";
sleep(2);
return;
}
}
int main(){
string x[] =  {"Miles to Km (1) ", "Exit (2)"};
int y;
cout << x[0] << x[1] << "\n";
cin >> y;
if (y == 1){
calculation();
}
else if (y == 2){
cout << "Exit" << "\n";
sleep(2);
return 0;
}
}
