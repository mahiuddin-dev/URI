#include <iostream>
using namespace std;

int main(){
    float a,b,c;
    cin>> a>>b>>c;
    if( (a+b) > c && (b+c) > a && (a+c) > b ){
        printf("Perimetro = %.1f\n",a+b+c);
    }else  printf("Area = %.1f\n",0.5*(a+b)*c);
    return 0;
}