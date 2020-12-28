#include <iostream>
using namespace std;

int main(){
    short int n,i,in = 0, out = 0;
    cin>> n;
    int num[n],m;

    for(i = 0; i < n; i++){
        cin>>m;
        num[i] = m;
    }

    for(i = 0; i < n; i++){
       if(num[i] >= 10 && num[i] <= 20 ) in++;
       else out++;
    }

    cout<< in<< " in\n"<< out<< " out" <<endl;

    return 0;
}