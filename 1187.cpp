#include <iostream>
using namespace std;

int main(){
    char sm[2];
    // cin>> sm;
    scanf("%s",sm);
    short int i,j;
    double are[12][12], sum = 0.0;
    
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            // cin>> are[i][j];
            scanf("%lf", &are[i][j]);
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 1+i; j <= 10-i; j++){
            sum += are[i][j];
        }
    }

    if(sm == "S"){
        printf("%.1lf\n",sum);
    }else{
        printf("%.1lf\n",sum/30);
    }

    return 0;
}

#include <stdio.h>
int main()
{
    double a=0.0, M[12][12];
    char T[2];
    int C,x,y,z,p=10,q=1;
    scanf("%s", &T);
    for(x=0;x<=11;x++){
        for(y=0; y<=11; y++)
            scanf("%lf", &M[x][y]);
    }
    for(z=0; z<=4;z++){
        for(C=q; C<=p;C++) a+=M[z][C];

            p--;
            q++;
    }
    if(T[0]=='S')
        printf("%.1lf\n",a);
    else if(T[0]=='M')
    {
        a=a/30.0;
        printf("%.1lf\n",a);
    }
    return 0;
}