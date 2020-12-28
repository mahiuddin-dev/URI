#include <iostream>
using namespace std;

int main(){
    short int n,i,a;

    cin>> n;

    // for(i = 0; i < n; i++){
    //     cin>> a;
    //     if(a % 2 == 0) cout<< 0 <<endl;
    //     else cout<< 1 <<endl;
    // }

    while(n){
        cin>> a;
        if(a % 2 == 0) cout<< 0 <<endl;
        else cout<< 1 <<endl;
        n--;
    }

    return 0;
}