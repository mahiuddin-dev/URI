#include <stdio.h>

int main(){
    double a,b,c;
    scanf("%lf%lf%lf", &a,&b,&c);
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", 0.5*a*c, 3.14159*c*c, 0.5*(a+b)*c, b*b, a*b );

    // printf("CIRCULO: %.3lf\n", 3.14159*c*c);
    // printf("TRAPEZIO: %.3lf\n", 0.5*(a+b)*c);
    // printf("QUADRADO: %.3lf\n", b*b);
    // printf("RETANGULO: %.3lf\n", a*b);
    return 0;
}