#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char a1[15] = "vertebrado",b1[15] = "ave", c1[15] = "carnivoro", c12[15] = "onivoro", b2[15] = "inseto", c2[15] = "hematofago";

    char a[15],b[15],c[15];
    cin>>a>>b>>c;
    
     if(strcmp(a,a1) == 0){
         if(strcmp(b,b1) == 0){
             if(strcmp(c,c1) == 0) cout<< "aguia" <<endl;
             else cout<< "pomba" <<endl;
         }else{
             if(strcmp(c,c12) == 0) cout<< "homem" <<endl;
             else cout<< "vaca" <<endl;
         }
     }else{
         if(strcmp(b,b2) == 0){
             if(strcmp(c,c2) == 0) cout<< "pulga" <<endl;
             else cout<< "lagarta" <<endl;
         }else{
             if(strcmp(c,c2) == 0) cout<< "sanguessuga" <<endl;
             else cout<< "minhoca" <<endl;
         }
     }
    
    return 0;
}
