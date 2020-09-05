#include "iostream"
#include "ctime"
#include "unistd.h"

using namespace std;


void football(){
int a;
int b;
int c;
int c2 = 0;
int a2 = 3;
cout << "Please Enter Wins ";
cin >> a;
cout << "Please Enter Draws ";
cin >> b;
cout << "Please Enter Losses ";
cin >> c;
cout << (a*a2 + b + c*c2) << "\n";
cout << "\n";
cout << "Calculate Again? y/N \n";
string m;
cin >> m;
if (m == "y"){
football();    
}
else if (m == "n"){
cout << "Exit\n";
sleep(2);
}
return;
}

int main(){
string x[] = {"Football Points(1)"," Exit(2)"};
int h;
cout << x[0] << x[1] << "\n";
cin >> h;
if (h == 1){
football();
}
if (h == 2){
cout << "Exit\n";
sleep(2);
return 0;
}
}