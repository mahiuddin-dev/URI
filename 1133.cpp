#include <iostream>
using namespace std;

int main(){
    int a,b,temp,i;
    cin>>a>>b;
    if(a > b){
        temp = b;
        b = a;
        a = temp; 
    }

    for(i = a+1; i < b; i++){
        if(i % 5 == 2 || i % 5 == 3) cout<< i <<endl;
    }
    return 0;
}