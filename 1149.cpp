#include <iostream>
using namespace std;

int main(){
    int x, n, i, sum = 0;
    cin>> x >> n;

    while(n <= 0){
        cin>> n;
    }
    for(i = 1; i <= n; i++){
        sum += x;
        x++;
    }

    cout<< sum <<endl;
    return 0;
}