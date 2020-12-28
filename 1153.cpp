#include <iostream>
using namespace std;

int main(){
    unsigned short int n,i;
    cin>> n;
    long int fectorial = 1;

    if(n <= 2){
        fectorial;
    }else{          
        for(i = 3; i <= n; i++){
            fectorial *=i;
         }
    }
    cout<< fectorial*2 <<endl;
    return 0;
}