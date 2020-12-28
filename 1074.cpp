#include <iostream>
using namespace std;

int main(){
    short int n,i;
    cin>> n;
    int num[n],m;
    for(i = 0; i < n; i++){
        cin>> m;
        num[i] = m;
    }

    for(i = 0; i < n; i++){
        if(num[i] % 2 == 0 && num[i] > 0){
            cout<< "EVEN POSITIVE" <<endl;
        }
        if(num[i] % 2 == 0 && num[i] < 0){
            cout<< "EVEN NEGATIVE" <<endl;
        }
        if(num[i] % 2 != 0 && num[i] > 0){
            cout<< "ODD POSITIVE" <<endl;
        }
        if(num[i] % 2 != 0 && num[i] < 0){
            cout<< "ODD NEGATIVE" <<endl;
        }
        if(num[i] == 0){
            cout<< "NULL" <<endl;
        }

    }

    return 0;
}