#include <iostream>
using namespace std;

int main(){
    float a,b,total;
    cin>> a>>b;
    
    total =  ((b-a)*100.0) / a;
    printf("%.2f%%\n", total); 
    return 0;
}


