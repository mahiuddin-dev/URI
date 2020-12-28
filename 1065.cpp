#include <iostream>
using namespace std;

int main(){
    int num[5],count=0,i,m;

    for(i = 0; i < 5; i++){
        cin>> m;
        num[i] = m;
    }

    for(i = 0; i < 5; i++){
        if(num[i] % 2 == 0) count++;
    }
    cout<< count<< " valores pares" <<endl;
    return 0;
}