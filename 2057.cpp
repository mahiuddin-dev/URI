#include <iostream>
using namespace std;

int main(){
    short int a,b,c;
    cin>> a>>b>>c;
    if ( a == 0) a = 24;
    a = a+b+c;

    if(a < 24) cout<< a <<endl;
    else if(a > 24) cout<< a-24 <<endl;
    else cout<< 0 <<endl;
    
    return 0;
}