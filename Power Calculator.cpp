#include "iostream"
using namespace std;
int main(){
int x;
int y; 
cout << "Power Calculator\n";
cout << "Define Voltage : ";
while(true){
cin >> x;
cout << "Define Current : ";
cin >> y;
cout << "Electric 'power' = " << (x*y) << "\n";
return 0;
}
}
