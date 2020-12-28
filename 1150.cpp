#include <iostream>
using namespace std;

int main(){
    int x,z,count = 0,i,b;
    cin>>x>>z;
    while(z <= x){
        cin>> z;
    }
    for(i = x, b = 0; b < z; i++){
        b += i;
        count++;  
    }
    cout<< count <<endl;
    return 0;
}