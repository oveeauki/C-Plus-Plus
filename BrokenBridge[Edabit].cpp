/*
Create a function which validates whether a bridge is safe to walk on 
(i.e. has no gaps in it to fall through).
*/
#include "bits/stdc++.h"
using namespace std;

namespace init{
bool _init_ = 1;
long long silta;
}

static bool onkosiltaihanokxd(string silta){
getline(cin,silta);
if(silta.find_last_of(' ') < 10000){
cout << "Bridge is Broken :(\n";
cout << "Position of 'Failed' Char is: " << "[" << (silta.find(' ')+1) << "]" << "\n";
init::_init_ = 0;
return init::_init_;
}
else{
cout << "Bridge is intact :D\n";
init::_init_ = 1;
return init::_init_;
}
}

signed main(void){
while(init::_init_){
cout << "Enter a Bridge in form of any chars.\n";
cout << ": ";
string silta;
onkosiltaihanokxd(silta);
}
}