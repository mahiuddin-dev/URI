#include <iostream>
using namespace std;

int main(){
    unsigned short int n,i,k,j;
    cin>> n;
    unsigned long long are[60];
    are[0] = 0;
    are[1] = 1;
    
    for(i = 2; i < 61; i++){
        are[i] = are[i-1]+are[i-2];
    }
    
    for(i = 0; i < n; i++){
        cin>> k;
        cout<<"Fib("<<k <<") = " <<are[k] <<endl;
    }
    return 0;
}