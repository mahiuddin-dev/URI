#include <iostream>
using namespace std;

int main(){
    short int i,j=1,m=7,k;

    for(i = 1; i <= 9; i+=2){
        for(k = m; k >=m-2 ; k--){
             printf("I=%d J=%d\n",j,k);
        }    
        j+=2;
        m+=2;
    }
    return 0;
}