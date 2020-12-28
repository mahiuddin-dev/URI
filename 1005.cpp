#include <iostream>
using namespace std;

int main(){
    double A,B,MEDIA;
    cin>> A>>B;
    A = A*3.5;
    B = B*7.5;
    MEDIA = (A+B) / 11;
    printf("MEDIA = %.5lf\n", MEDIA);
    return 0;
}