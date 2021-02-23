// Calculator Testing xd

#include "bits/stdc++.h"
#include "unistd.h"

using namespace std;

void multiply(){
long double a[2];
for(int i=0;i<2;i++){
cout << "Please Enter Number " << (1+i) << " :";
cin >> a[i]; 
}
cout << "Answer: " << (a[0]*a[1]) << "\n";
sleep(2);
cout << "Calculate Again y/N ?\n";
char answer;
cin >> answer;
if(answer == 'y' || answer == 'Y'){
multiply();
return;
}
else{
cout << "Else than Y Selected...\n";
sleep(1);
cout << "Returning to Main Menu....\n";
return;
}
}

void divide(){
long double a[2];
for(int i=0;i<2;i++){
cout << "Please Enter Number " << (1+i) << " :";
cin >> a[i]; 
}
cout << "Answer: " << (a[0]/a[1]) << "\n";
sleep(2);
cout << "Calculate Again y/N ?\n";
char answer;
cin >> answer;
if(answer == 'y' || answer == 'Y'){
divide();
return;
}
else{
cout << "Else than Y Selected...\n";
sleep(1);
cout << "Returning to Main Menu....\n";
return;
}
}

void miinus(){
long double a[2];
for(int i=0;i<2;i++){
cout << "Please Enter Number " << (1+i) << " :";
cin >> a[i]; 
}
cout << "Answer: " << (a[0]-a[1]) << "\n";
sleep(2);
cout << "Calculate Again y/N ?\n";
char answer;
cin >> answer;
if(answer == 'y' || answer == 'Y'){
miinus();
return;
}
else{
cout << "Else than Y Selected...\n";
sleep(1);
cout << "Returning to Main Menu....\n";
return;
}
}

void plussa(){
long double a[2];
for(int i=0;i<2;i++){
cout << "Please Enter Number " << (1+i) << " :";
cin >> a[i]; 
}
cout << "Answer: " << (a[0]+a[1]) << "\n";
sleep(2);
cout << "Calculate Again y/N ?\n";
char answer;
cin >> answer;
if(answer == 'y' || answer == 'Y'){
plussa();
return;
}
else{
cout << "Else than Y Selected...\n";
sleep(1);
cout << "Returning to Main Menu....\n";
return;
}
}

int main(){
cout << "Calculator\n";
sleep(1);
while(true){
cout << "Please Select:\n";
cout << "Plus(1)  Multiply(2)  Divide(3)  Minus(4) Exit(5) \n";
char selection;
cin >> selection;
if (selection == '1'){
plussa();
}
else if(selection == '2'){
multiply();
}
else if(selection == '3'){
divide();
}
else if(selection == '4'){
miinus();
}
else if(selection == '5'){
cout << "Exiting...\n";
sleep(2);
return 0;
}
else{
cout << "Exiting...\n";
sleep(2);
return 0;
}
}
}