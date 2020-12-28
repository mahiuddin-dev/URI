#include <stdio.h>

int main(){
    unsigned int A,B;
    double C;
    scanf("%u %u %lf", &A,&B, &C);
    C *=(double) B;
    printf("NUMBER = %u\nSALARY = U$ %.2f\n",A,C);
    return 0;
}