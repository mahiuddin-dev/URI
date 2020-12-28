#include <stdio.h>

int main(){
    int a;
    double b, result;
    scanf("%d%lf", &a, &b);
    result = (double) a / b;
    printf("%.3lf km/l\n", result);
    return 0;
}