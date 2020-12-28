#include <iostream>

using namespace std;

int main(){
    short int i,pos = 0;
    float num[6],m;
    for(i = 0; i < 6; i++){
        cin>>m;
        num[i] = m;
    }

    for(i = 0; i < 6; i++){
        if(num[i] > 0) pos++;
    }
    cout<<pos<<" valores positivos"<<endl;
    return 0;
}