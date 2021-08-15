#include "stdlib.h"

void clean(void){
#ifdef __linux__
system("clear");
#endif
#ifndef __linux__
system("cls");
#endif
}
