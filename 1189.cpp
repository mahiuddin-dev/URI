#include <iostream>
using namespace std;

int main(){
    
    double a=0.0, M[12][12];
    char T[2];
    short int x,y,p=11,r=7;
    scanf("%s", &T);
    for(x=0;x<=11;x++){
        for(y=0; y<=11; y++)
            scanf("%lf", &M[x][y]);
    }
    
    for(x=1; x<=10;x++){
        if(x<=5){
            for(y=p; y<=11;y++)
                a+=M[x][y];
            p--;
        }
        else if(x>=6){
        for(y=r; y<=11; y++)
            a+=M[x][y];
        r++;
        }
    }

    if(T[0]=='S')
        printf("%.1lf\n",a);
    else{
        a=a/30.0;
        printf("%.1lf\n",a);
    }

    return 0;
}
