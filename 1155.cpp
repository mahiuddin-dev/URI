#include <iostream>
using namespace std;

int main(){
    float i, total=0.0;

    for(i = 1.0; i <=100 ; i++){
        total += 1.0/i;
    }
    printf("%.2f\n",total);
    return 0;
}