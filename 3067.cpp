#include <iostream>
using namespace std;

int main(){
     int n,c;
    while( scanf("%d",&n) != EOF){
        c= n/100;
        n %=100;
        if(n > 0) cout<< c+1 <<endl;
        else cout<< c <<endl;
    }

    return 0;
}