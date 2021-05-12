/*
Create a function that returns true if an integer is evenly divisible by 5, and false otherwise.
*/
#include "bits/stdc++.h"
using namespace std;

const int divisiblebyfive(short number){
cout << "Enter a number\n" << "~ ";
cin >> number;
if(number%5 == 0){
cout << "Number " << "[" << number << "]" << " Is divisible by five\n";
}
else{
cout << "Number " << "[" << number << "]" << " Is not divisible by five\n"; 
}
return(number%5);
}

signed main(void){
short number;
divisiblebyfive(number);
}