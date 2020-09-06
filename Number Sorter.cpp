#include "bits/stdc++.h"
#include "unistd.h"
using namespace std;

void sort(){
cout << "Please Enter 6 Different Numbers\n";
string f;
long long int ok[6];
int x = sizeof(ok) / sizeof(ok[0]);
cout << "Enter Number 1 ";
cin >> ok[0]; 
cout << "Enter Number 2 ";
cin >> ok[1]; 
cout << "Enter Number 3 ";
cin >> ok[2];
cout << "Enter Number 4 ";
cin >> ok[3]; 
cout << "Enter Number 5 ";
cin >> ok[4]; 
cout << "Enter Number 6 ";
cin >> ok[5];
cout << "You Entered Numbers : ";
for (int i = 0; i < x; i++)
cout << ok[i] << " ";
cout << "\n";
sleep(1);
cout << "Sorting...\n";
sort(ok,ok+x);
sleep(2);
cout << "Your Numbers correct order is : ";
for (int i = 0; i < x; i++)
cout << ok[i] << " ";
cout << "\n";
cout << "Sort Again y/N ?\n";
cin >> f;
if (f == "y" || f == "Y"){
sort();    
}
if (f == "n" || f == "N"){
cout << "Exit\n";
sleep(2);
return;    
}
}
int main(){
string u[]={"Number Sorter(1)"," Exit(2)"};
int j;
cout << u[0] << u[1] << " ";
cin >> j;
if (j == 1){
sort();
}
if (j == 2){
cout << "Exit\n";
sleep(2);
return 0;    
}
}
