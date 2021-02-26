#include <csignal>
#include <iostream>
#include <wiringPi.h>
#include "unistd.h"
using namespace std;
volatile sig_atomic_t signal_received = 0;
void sigint_handler(int signal) {
   signal_received = signal;
}
int main(){
   cout << "Signaali : ";
   cout  << !signal_received << endl;
   cout << "CTRL-Z = Exit." << endl;
   if (wiringPiSetup() == -1)
   exit (1);
   signal(SIGINT, sigint_handler);
   wiringPiSetup();
   pinMode(7,OUTPUT);
   delay(1000);
   pinMode(21,OUTPUT);
   delay(1000);
   pinMode(22,OUTPUT);
   cout << "Pinnie tila = OUTPUT...\n";
   for(int i=0;i<3;i++){
   delay(1000);
   cout << "Pinneille Kirjoituss ...\n";
   digitalWrite(22,HIGH);
   delay(600);
   digitalWrite(22,LOW);
   delay(600);
   digitalWrite(21,HIGH);
   delay(600);
   digitalWrite(21,LOW);
   delay(600);   
   digitalWrite(7,HIGH);
   delay(1200);
   digitalWrite(7,LOW);
   delay(600);
   digitalWrite(21,HIGH);
   delay(600);
   digitalWrite(21,LOW);
   delay(600);
   digitalWrite(22,HIGH);
   delay(600);
   digitalWrite(22,LOW);
}
   cout << "VALMISSS !\n";
   
   delay(2000);
   cout << "Resetataan Kaikki Pinnit = INPUT \n";
   for(int i=0;i<40;i++){
   cout << "Pinni:" << (1+i) << "\n";
   delay(100);
   pinMode(i,INPUT);
   }
   cout << "EXIT..\n";
   return 0; 
}  