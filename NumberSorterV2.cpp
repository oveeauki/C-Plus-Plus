#include "bits/stdc++.h"
#include "unistd.h"
using namespace std;

void sortv2(){
string g;
int x;
cout << "Please Enter the Amount of Numbers You Want to Sort\n";
cin >> x;
long long int y[x];
int h = sizeof(y) / sizeof(y[0]);
for(int i=0;i<x;i++){
cout << "Please Enter Number " << (i+1) << " ";
cin >> y[i];
}
cout << "\n";
cout << "You Entered Numbers ";
for(int i=0;i<x;i++)
cout << y[i] << " ";
cout << "\n";
sleep(2);
cout << "Sorting...\n";
sleep(3);
sort(y,y+h);
cout << "Your Numbers in Correct Order Are : ";
for (int i=0;i<x;i++)
cout << y[i] << " ";
cout << "\n";
cout << "Sort Again y/N ?\n";
cin >> g;
if (g == "y" || g == "Y"){
sortv2();    
}
else if (g == "n" || g == "N"){
cout << "Exiting...\n";
sleep(2);
return;    
}
}
int main(){
int cho;
string opt[]={"Number Sorter V2(1)", " Exit(2)"};
cout << opt[0] << opt[1] << "\n";
cin >> cho;
if (cho == 1){
sortv2();
}
else if (cho == 2){
cout << "Exit\n";
sleep(3);
return 0;
}
}
