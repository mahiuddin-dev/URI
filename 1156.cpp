#include <iostream>
using namespace std;

int main(){
    float i,total=0;
    double j = 1;   
    
    for(i = 1.0; i <= 39.0; i+=2.0){   
        total +=  i/j;
        j = j*2.0;
    }

    printf("%.2f\n",total);
    return 0;
}

