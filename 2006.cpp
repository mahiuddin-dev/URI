#include <iostream>
using namespace std;

int main(){
    short int n,m,i,count=0;
    cin>> n;
    for(i = 0; i < 5; i++){
        cin>> m;
        if(m == n) count++;
    }
    cout<< count <<endl;
    return 0;
}