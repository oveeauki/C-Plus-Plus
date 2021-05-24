/*
            Edabit
Return the Remainder from Two Numbers
*/
#include "iostream"
using namespace std;

signed modulustaa(short ekanumero,short tokanumero){
cout << "Remainder of numers: " <<  "["  << ekanumero  <<  "]" << "&" << "[" << tokanumero << "]" << " is = " << (ekanumero%tokanumero) << "\n";  
return(ekanumero%tokanumero);
}

signed main(void){
short lippisint[3];
for(int i=1;i<3;i++){
cout << "Number " << i << "\n" << "~ ";
cin >> lippisint[i];
}
modulustaa(lippisint[1],lippisint[2]);
return 0;
}
