/*
 _   _                 _                 _____            _   
| \ | |               | |               /  ___|          | |  
|  \| |_   _ _ __ ___ | |__   ___ _ __  \ `--.  ___  _ __| |_ 
| . ` | | | | '_ ` _ \| '_ \ / _ \ '__|  `--. \/ _ \| '__| __|
| |\  | |_| | | | | | | |_) |  __/ |    /\__/ / (_) | |  | |_ 
\_| \_/\__,_|_| |_| |_|_.__/ \___|_|    \____/ \___/|_|   \__|
*/
#include "bits/stdc++.h"
#include "unistd.h"
using namespace std;

int sorttingi(short u_count){
cout << "Enter amont of numberss to sort: ";
cin >> u_count;
long array[u_count];
long size = sizeof(array)/sizeof(array[0]);
for(short i=0;i<u_count;i++){
cout << "Enter Number" << "[" << (i+1) << "]" << ": ";
cin >> array[i];    
}
cout << "You gave Numberss [ ";
for(short i=0;i<u_count;i++)
cout << array[i] << " ";
cout << "]" << "\n";
sort(array,array+size);
cout << "The order of numbers after sorting them is [ ";
for(short i=0;i<u_count;i++)
cout << array[i] << " ";
cout << "]" << "\n";
return array[u_count];
}

signed main(void){
cout << "NumberSort\n";
sleep(1);
short u_count;
sorttingi(u_count);
}
