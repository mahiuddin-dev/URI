#include <iostream>
using namespace std;

int main(){
    int i,a = 1,b= 1,c=1,n;
    cin>>n;

    for(i = 0; i < n; i++){
        printf("%d %d %d\n",a,b,c);
        a++;
        b = a*a;
        c = a*a*a;
    }
    return 0;
}