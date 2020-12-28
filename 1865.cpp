#include <iostream>
#include <string.h>
using namespace std;

int main(){
   unsigned short int n,i;
   short int p;
   char name[100];
   cin>> n;
   for(i = 0; i < n; i++){
       cin>> name>>p;
        if(!strcmp(name, "Thor") )cout<< "Y" <<endl;
        else cout<< "N" <<endl;
   }
    return 0;
}