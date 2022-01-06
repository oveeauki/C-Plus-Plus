/*
        Argc & Argv Demo (Standard C)
                                       ~ FreDi
                                                    */
#include "stdio.h"

signed main(int argc,char *argv[]){
int n;
printf("Amount of arguments[%d%s",argc,"]\n");
for(n=0;n<argc;n++){
    printf("[%d] Argument == [%s]\n",(n+1),argv[n]);
}
return(0);  
}