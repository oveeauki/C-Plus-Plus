// This version has user defined amount of numbers and their values and sort from high to low
#include "bits/stdc++.h"
#include "unistd.h"
using namespace std;
void htl(){
string h;
int x;
cout << "Enter The Amount of Numbers to Sort ";
cin >> x;
int arr[x];
int n = sizeof(arr) / sizeof(arr[0]);
for (int i=0;i<x;i++){
cout << "Enter Number " << (i+1) << ": ";
cin >> arr[i];
}
cout << "You Entered Numbers : ";
for (int i=0;i<x;i++)
cout << arr[i] << " ";
cout << "\n";
cout << "Sorting...\n";
sleep(2);
reverse(arr,arr+n);
cout << "Your Numbers in (High to Low) Order Are: ";
for(int i=0;i<x;i++)
cout << arr[i] << " ";
cout << "\n";
cout << "";
cout << "Sort Again ? y/N ";
cin >> h;
if (h == "y" || h == "Y"){
htl();    
}
else if(h == "n" || h == "N"){
cout << "Exit\n";
sleep(1);
return;
}
}
void lth(){
string h;
int x;
cout << "Enter The Amount of Numbers to Sort ";
cin >> x;
int arr[x];
int n = sizeof(arr) / sizeof(arr[0]);
for (int i=0;i<x;i++){
cout << "Enter Number " << (i+1) << ": ";
cin >> arr[i];
}
cout << "You Entered Numbers : ";
for (int i=0;i<x;i++)
cout << arr[i] << " ";
cout << "\n";
cout << "Sorting...\n";
sleep(2);
sort(arr,arr+n);
cout << "Your Numbers in (Low to High) Order Are: ";
for(int i=0;i<x;i++)
cout << arr[i] << " ";
cout << "\n";
cout << "";
cout << "Sort Again ? y/N ";
cin >> h;
if (h == "y" || h == "Y"){
lth();    
}
else if(h == "n" || h == "N"){
cout << "Exit\n";
sleep(1);
return;
}
}
int main(){
string opt[]={"Number Sort Low to High (1) ","Number Sort High to Low (2) ","Exit (3)"};
int sel;
cout << opt[0] << opt[1] << opt[2] << "\n";
cin >> sel;
if (sel == 1){
lth();
}
else if(sel == 2){
htl();
}
else if(sel == 3){
cout << "Exiting...\n";
sleep(1);
return 0;    
}
}
