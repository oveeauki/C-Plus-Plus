/*
 _____     _         _      _  _   
|  ___|   | |       | |    (_)| |  
| |__   __| |  __ _ | |__   _ | |_ 
|  __| / _` | / _` || '_ \ | || __|
| |___| (_| || (_| || |_) || || |_ 
\____/ \__,_| \__,_||_.__/ |_| \__|

Create a function that returns the number of frames shown in a given number of minutes for a certain FPS.

*/

#include "bits/stdc++.h"

using namespace std;

const int framess(short frames,short userinmin){
cout <<  "There are " << "[" << ((userinmin*60)*frames) << "]" << " Frames Being Displayed in " << "[" << userinmin << "] " << "Minutes" << "\n";
return((userinmin*60)*frames);
}

signed main(void){
short userinmin;
short frame;
cout << "Enter Amount of Minutes\n" << "~ ";
cin >> userinmin;
cout << "Enter Amount of FPS \n" << "~ ";
cin >> frame;
framess(frame,userinmin);
}
