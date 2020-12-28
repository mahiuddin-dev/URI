#include <iostream>

using namespace std;

int main(){
    short int are[10],i,m;    

    for(i = 0; i < 10; i++){
        cin>> m;
        if(m <= 0) m = 1; 
        are[i] = m;
    }

    for(i = 0; i < 10; i++){
        cout<<"X["<<i <<"] = " <<are[i] <<endl;
    }
    return 0;
}