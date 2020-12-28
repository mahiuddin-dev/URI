#include <iostream>
using namespace std;

int main(){
    int n,totalAge = 0;
    float count=0;

    while(1){
        cin>> n;
        if(n<0) break;
        else {
            totalAge +=n; 
            count++;
        }
    }

    printf("%.2f\n",totalAge/count);
    return 0;
}