/*
    Workss only on Windows !!! 
    orr with wine on linux...
                                    */

#include "bits/stdc++.h"
#include "conio.h"
#include "screenclear.h"
#include "unistd.h"

#ifndef __linux__
#include "windows.h"
#endif

using namespace std;
namespace ok{
wstring big = L"Ä";
wstring small = L"ä";
}
using namespace ok;

void let(void){
#define bc WriteConsoleW(GetStdHandle(STD_OUTPUT_HANDLE), big.c_str(), big.size(), nullptr, nullptr);
#define sc WriteConsoleW(GetStdHandle(STD_OUTPUT_HANDLE), small.c_str(), small.size(), nullptr, nullptr);
clean();
cout << "-------------------------------------------------\n"
     << "|             [ ON/OFF SWITCH ]                 |\n"      
     << "|\t";bc;sc;cout<<"net P";sc;sc;cout<<"lle [1] / ";bc;sc;cout<<"net Pois [2]\t|\n|\t\t    Sekoa [3]\t\t\t|\n"
     << "-------------------------------------------------\n";
}

static int sounds_on_off(short _switch){
let();
switch(_switch){
case 49:
    bc;sc;cout<<"net P";sc;sc;cout<<"lle\n";
    break;
case 50:
    bc;sc;cout<<"net Pois\n";
    break;
case 51:
    clean();
    break;
}
return(_switch);
}

signed main(void){
short _switch;
let();
while(_switch != 51){
_switch = _getch();
sounds_on_off(_switch);
}
cout << "Ny pääsit pitkäänniemeen !\n";
sleep(3);
return 0;
}
