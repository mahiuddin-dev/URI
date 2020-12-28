#include <iostream>
using namespace std;

int main(){
    short int i,j=1,k;
    for(i = 1; i <= 9; i+=2){
        for(k = 7; k >= 5; k--){
            printf("I=%d J=%d\n",j,k);
        }
        j += 2;
    } 
    return 0;
}