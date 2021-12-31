/* 
          Argument Count and Vector Demo      
                                        ~ Oveeauki
    Usage: Execute for example. Filename[argument1,argc2,etc...]
                                                                    */
#include "iostream" // C++ Standard I/O Header

using namespace std; // No need to use std::

signed main(int argc,char *argv[]){ 
for(int i=0;i<argc;i++){ // Looping to list all arguments.
if(i == 0){
cout << "Argument Amount is [" << argc << "]\nThe First Argument [" << argv[i] << "] Is The Executable File\n";
}
else{
cout << "Argument ["<< (i+1) <<"] is " << argv[i] << "\n";
}}
return 0; // End
}