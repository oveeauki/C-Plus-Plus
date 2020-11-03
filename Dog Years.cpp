#include "iostream"
using namespace std;

void ika(){
double x;
double y = 10.5;
cout << "Doge Years: ";
cin >> x;
if(x > 2){
cout << "Human Years: = " << (x*y) << "\n";
cout << "Dog Years To Human 1) " << "Quit 2)" << "\n";
}
if (x <= 2){
cout << "Minumum Age: 3\n";
} 
}
int main(){
cout << "Dog Years To Human 1) " << "Quit 2)" << "\n";
int x;
while(true){
cin >> x;
if (x == 1){
ika();
}
if (x == 2){
cout << "Quit:\n";
return 0;
}
}
}
