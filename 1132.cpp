#include <iostream>
using namespace std;

int main(){
    int a,b,i,sum=0,temp;
    cin>> a>>b;

    if(a < b){
        temp = b;
        b = a;
        a = temp;
    }
    for(i = b; i <= a; i++){
        if(i % 13 != 0) sum += i;
    }
    cout<< sum <<endl;

    return 0;
}