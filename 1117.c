#include <stdio.h>

int main(){
    float x,y;

        scanf("%d%d",&x,&y);
        if(x >= 0 && x <11 && y >= 0 && y <11){
            printf("media = %.2f\n",x+y);
                
        }else if(x < 0 || x >10 || y < 0 && y >10){
            printf("nota invalida");
        }
    

    return 0;
}