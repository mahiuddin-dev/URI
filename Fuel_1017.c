#include <stdio.h>

int main(){
    int time, speed;
    scanf("%d%d", &time, &speed);
    printf("%.3f\n", (time*speed)/12.0);
    return 0;
}