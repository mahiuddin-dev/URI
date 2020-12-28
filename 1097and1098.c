// ** 1097

#include <stdio.h>

int main(){
    short int i,j=1,m=7,k;

    for(i = 1; i <= 9; i+=2){
        for(k = m; k >=m-2 ; k--){
             printf("I=%d J=%d\n",j,k);
        }    
        j+=2;
        m+=2;
    }
    return 0;
}

// ** 1098

#include <stdio.h>

int main(){
    unsigned short int x,y;
    float i,j;
    for(i = 0.0; i < 2.1; i+=0.2){
        for(j = 1.0; j <= 3.0; j++){
            if(i > 0 && i <1 || i > 1 && i < 2){
                printf("I=%.1f J=%.1f\n",i,j+i);
            }else{
                x = i; y = j+i;
                printf("I=%d J=%d\n", x, y);
            }
            
        }
    }
    return 0;
}

