#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a,b,c,d,r1,r2;
    cin>> a>>b>>c;
    d = (pow(b,2)-4*a*c);
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    if(d >= 0 && a != 0){
        printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
    }else{
        cout<< "Impossivel calcular" <<endl;
    }
    return 0;
}