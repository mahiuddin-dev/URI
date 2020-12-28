#include <iostream>
using namespace std;

int main(){
    float productPrize[5] = {4.00,4.50,5.00,2.00,1.50};
    short int x,y;
    cin>> x>>y;
    printf("Total: R$ %.2lf\n", productPrize[x-1]*y);
    return 0;
}