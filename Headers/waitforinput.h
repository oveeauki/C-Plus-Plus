#include "iostream"

void wait(void){
#ifdef __linux__
system("read");
#endif
#ifndef __linux__
system("pause");
#endif
}
