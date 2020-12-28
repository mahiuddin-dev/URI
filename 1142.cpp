#include <iostream>
using namespace std;

int main(){
    int a=1,b=2,c=3,n,i;
    cin>> n;

    for(i = 0; i < n; i++){
        printf("%d %d %d PUM\n",a,b,c);
        a+=4; b+=4; c+=4;
    }
    return 0;
}