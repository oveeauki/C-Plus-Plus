#include "iostream"
using namespace std;

void yess(){
string ok[] = {"Is the Number Less than or Equal to Zero? (1)"," Exit(2)"};
cout << "Is the Number Less than or Equal to Zero? ";
int x;
cin >> x;
if (x <= 0){
cout << x << " is less than or equal to zero\n";
yess();
}
else{
cout << "Number " << x <<  " is over zero"  << "\n";
cout << ok[0] << ok[1] << "\n";
return;    
}
}
int main(){
string ok[] = {"Is the Number Less than or Equal to Zero? (1)"," Exit(2)"};
cout << ok[0] << ok[1] << "\n";
int x;
while (true){
cin >> x;
if (x == 1){
yess();
}
if (x == 2){
cout << "Exit\n";
return 0;
}
}
}
