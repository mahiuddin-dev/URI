#include <iostream>
using namespace std;

int main(){
    float are[100],a;
    unsigned short int i;

    for(i = 0; i < 100; i++){
        cin>> a;
        are[i] = a;    
    }
    for(i = 0; i < 100; i++){
        if(are[i] <= 10){
            printf("A[%d] = %.1f\n",i,are[i]);
        }
    }
    return 0;
}