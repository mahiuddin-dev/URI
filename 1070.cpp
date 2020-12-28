#include <iostream>
using namespace std;

int main(){
    unsigned int n,i;
    cin>> n;
    if(n % 2 == 0) {
        for(i = 1; i <= 11; i+=2){
            cout<< n+i <<endl;
        }
    }else{
        for(i = 0; i <= 10 ; i+=2){
            cout<< n+i <<endl;
        }
    }
    return 0;
}