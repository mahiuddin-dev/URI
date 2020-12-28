#include <iostream>
using namespace std;

int main(){
    double A,B,C,MEDIA;
    cin>> A>>B>>C;
    A=A*2;
    B=B*3;
    C=C*5;
    MEDIA = (A+B+C)/10;
    printf("MEDIA = %.1lf\n", MEDIA); 
    return 0;
}