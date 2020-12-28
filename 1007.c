#include <stdio.h>

int main(){
    
    int A,B,C,D,DIFERENC;
    
    scanf("%d %d %d %d", &A,&B,&C,&D);
    A *=B;
    C *=D;
    printf("DIFERENCA = %d\n", A-C);
    return 0;
    
    
}