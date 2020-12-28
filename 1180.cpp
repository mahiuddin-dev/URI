#include <iostream>
using namespace std;

int main(){
    unsigned short int n;
    cin>> n;
     int are[n],i,m,small;

    for(i = 0; i < n; i++){
        cin>> m;
        are[i] = m;
    }

    small = are[0];
    for(i = 1; i < n; i++){
        if(small > are[i]){
            small = are[i];
        }
    }
    i = 0;
    while(i < n){
        if(are[i] == small) break;
        i++;
    }

    cout<<"Menor valor: "<<small <<endl;
    cout<<"Posicao: " <<i <<endl;

    return 0;
}