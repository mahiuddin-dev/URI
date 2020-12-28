#include <iostream>
using namespace std;

int main(){
    short int n;
    while(scanf("%hd", &n) != EOF){
        if(n > 0) cout<< "vai ter duas!" <<endl;
        else cout<< "vai ter copa!" <<endl;
    }
    return 0;
}