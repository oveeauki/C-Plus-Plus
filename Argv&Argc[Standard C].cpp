/*
        Argc & Argv Demo (Standard C)
                                       ~ FreDi
                                                    */
#include "stdio.h"

signed main(int argc,char* argv[]){
for(int i=0;i<argc;i++)
	printf("Argument [%d] = [%s]\n",(i+1),argv[i]);
return(0);
}
