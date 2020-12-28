#include <iostream>
#include <cmath>
using namespace std;

int main(){
    unsigned short int n;
    cin>> n;
    unsigned int i;

    for(i = 1; i <= n; i++){
        printf("%d %d %d\n", i,i*i,i*i*i);
        printf("%d %d %d\n", i,i*i+1,i*i*i+1);
    }
    return 0;
}