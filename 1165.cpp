#include <iostream>
#include <cmath>
using namespace std;

int prime(int x, int i){
    int root;
    if(x<2)
        return 0;
    if(x==2)
        return 1;
    if(x%2==0)
        return 0;
    root=sqrt(x);
    for(i=3; i<=root; i=i+2){
        if(x%i==0)
            return 0;
    }
    return 1;
}

int main(){
    unsigned short int N;
    int X,i;
    cin>> N;
    for(i=1;i<=N;i++){
        scanf("%d", &X);
        if(1==prime(X,i))
            printf("%d eh primo\n", X);
        else if(0==prime(X,i))
            printf("%d nao eh primo\n", X);
    }
    return 0;
}