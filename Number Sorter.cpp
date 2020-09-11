#include "bits/stdc++.h"
#include "unistd.h"
using namespace std;

void sort(){
string f;
long long int x[7];
int n = sizeof(x) / sizeof(x[0]);
cout << "Give 6 Numbers to Sort\n";
for(int i=1;i<7;i++){
cout << "Number " << i << " ";
cin >> x[i];
}
cout << "Your Numbers Were ";
for(int i=1;i<n;i++)
cout << x[i] << " ";
cout << "\n";
cout << "Sorting....\n";
sleep(3);
sort(x,x+n);
cout << "Your Numbers In Correct Order Are\n";
for(int i=1;i<n;i++)
cout << x[i] << " ";
cout << "\n";
cout << "Sort Again y/N ?\n";
cin >> f;
if (f == "y" || f == "Y"){
sort();    
}
else if (f == "n" || f == "N"){
cout << "Exit\n";
sleep(2);
return;    
}
}
int main(){
int y;
string x[]={"Number Sorter(1)"," Exit(2)"};
cout << x[0] << x[1] << "\n";
cin >> y;
if (y == 1){
sort();    
}
else if (y == 2){
cout << "Exit\n";
sleep(2);
return 0;    
}
}
