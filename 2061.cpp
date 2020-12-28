#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    short int m, count;
    cin>> n>>m;
     n = 0;
    char action[10];
    while(m--){
        cin>> action;
        if(action[0] == 'f') n++;
    }
    cout<< n <<endl;
    return 0;
}