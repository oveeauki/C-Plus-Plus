#include "iostream"
#include "string"
#include "vector"
using namespace std;

void jako(){
double x;
double y;
vector<string> ok = {"Divide(1)" , "Multiply(2)" , "Plus(3)" , "Minus(4)" , "Exit(5)"};
cout << "Division function:\n";
cout << "Number 1: ";
cin >> x;
cout << "Number 2: ";
cin >> y;
cout << "Answer is = " << (x/y) << "\n";
cout << "Calculator: ";
cout << ok[0] << " " << ok[1] << " " << ok[2] << " " << ok[3] << " " << ok[4] << "\n";
return;
}
void Kerto(){
int x;
int y;
vector<string> ok = {"Divide(1)" , "Multiply(2)" , "Plus(3)" , "Minus(4)" , "Exit(5)"};
cout << "Multiplication function:\n";
cout << "Number 1: ";
cin >> x;
cout << "Number 2: ";
cin >> y;
cout << "Answer is = " << (x*y) << "\n";
cout << "Calculator: ";
cout << ok[0] << " " << ok[1] << " " << ok[2] << " " << ok[3] << " " << ok[4] << "\n";
return;
}
void Miinus(){
int x;
int y;
vector<string> ok = {"Divide(1)" , "Multiply(2)" , "Plus(3)" , "Minus(4)" , "Exit(5)"};
cout << "Minus funktio:\n";
cout << "Number 1: ";
cin >> x;
cout << "Number 2: ";
cin >> y;
cout << "Answer is = " << (x-y) << "\n";
cout << "Calculator: ";
cout << ok[0] << " " << ok[1] << " " << ok[2] << " " << ok[3] << " " << ok[4] << "\n";
return;
}
void Plus(){
int x;
int y;
vector<string> ok = {"Divide(1)" , "Multiply(2)" , "Plus(3)" , "Minus(4)" , "Exit(5)"};
cout << "Plus function:\n";
cout << "Number 1: ";
cin >> x;
cout << "Number 2: ";
cin >> y;
cout << "Answer is = " << (x+y) << "\n";
cout << "Calculator: ";
cout << ok[0] << " " << ok[1] << " " << ok[2] << " " << ok[3] << " " << ok[4] << "\n";
return;
}
int main(){
vector<string> ok = {"Divide(1)" , "Multiply(2)" , "Plus(3)" , "Minus(4)" , "Exit(5)"};
int x;
cout << "Calculator: ";
cout << ok[0] << " " << ok[1] << " " << ok[2] << " " << ok[3] << " " << ok[4] << "\n";
while(true){
cin >> x;    
if (x == 1){
jako();
}
if (x == 2){
Kerto();
} 
if (x == 3){
Plus();
}
if (x == 4){
Miinus();
}
if (x == 5){
cout << "Exit:\n";
return 0;
}
}
}
