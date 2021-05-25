/*
Write a program that presents the user w/ a choice of your 5 favorite beverages (Coke, Water, Sprite, ... , Whatever).
Then allow the user to choose a beverage by entering a number 1-5.
Output which beverage they chose.
★★ Modify the program so that it asks the user to enter any number other than the number equal to the number of times they've been asked to enter a number. (i.e on the first iteration "Please enter any number other than 0" and on the second iteration "Please enter any number other than 1"m etc. etc. The program must behave accordingly exiting when the user enters the number they were asked not to.)
*/
#include "bits/stdc++.h"

using namespace std;

namespace colakone{
volatile bool kolakoneinit = true;
}

const int kolakone(short selection,float cash){
if(selection == 1){
cout << "You Bought Sprite !!\n" << "Amount of Change " << "[" << (cash-2) << "] Euros\n"; 
}
else if(selection == 2){
cout << "You Bought Fanta !!\n" << "Amount of Change " << "[" << (cash-1.5) << "] Euros\n"; 
}
else if(selection == 3){
cout << "You Bought Coca-Cola !!\n" << "Amount of Change " << "[" << (cash-2.2) << "] Euros\n"; 
}
else if(selection == 4){
cout << "You Bought Dr.Pepper !!\n" << "Amount of Change " << "[" << (cash-2.1) << "] Euros\n"; 
}
else if(selection == 5){
cout << "You Bought Water !!\n" << "Amount of Change " << "[" << (cash-0.5) << "] Euros\n"; 
}
else if(selection < 1 || selection > 5){
cout << "Number Out of Range....\n" << "You get all your " << "[" << cash << "]" << " Euros Back\n";
colakone::kolakoneinit = false;
}
cout << endl;
return(cash);
}

signed main(void){
float selection,cashh;
while(colakone::kolakoneinit){
cout << "(1)Sprite 2€\n(2)Fanta 1.5€\n(3)Coca-Cola 2.2€\n(4)Dr.Pepper 2.1€\n(5)Water 50 Cents\n" << "Select\n" << "~ ";
cin >> selection;
cout << "Enter Amount of Cashhh\n" << "~ ";
cin >> cashh;
kolakone(selection,cashh);
}
}
