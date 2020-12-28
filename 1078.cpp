#include <iostream>
using namespace std;

int main(){
    unsigned short int n;
    cin>> n;
    int i;
    for(i = 1; i <= 10 ; i++){
        cout<< i <<" x "<<n <<" = "<< n*i <<endl;
    }

    return 0;
}