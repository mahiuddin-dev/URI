#include <iostream>
using namespace std;

int main(){
    short int n,pruduct,quantity;
    cin>> n;
    float prize = 0;
    while(n--){
        cin>> pruduct >> quantity;
        if(pruduct == 1001) prize += quantity*1.50;
        else if(pruduct == 1002) prize += quantity*2.50;
        else if(pruduct == 1003) prize += quantity*3.50;
        else if(pruduct == 1004) prize += quantity*4.50;
        else if(pruduct == 1005) prize += quantity*5.50;
    }
    printf("%.2f\n",prize);
    return 0;
}