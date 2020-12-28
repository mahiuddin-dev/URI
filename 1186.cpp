#include <iostream>
using namespace std;

int main(){
    char sm[2];
    cin>> sm;
    short int i,j;
    double are[12][12], sum = 0.0;
    
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            cin>> are[i][j];
        }
    }

    for(i = 1; i < 12; i++){
        for(j = 12-i; j < 12; j++){
            sum += are[i][j];
        }
    }

    if(sm == "S"){
        printf("%.1lf\n",sum);
    }else{
        printf("%.1lf\n",sum/66);
    }

    return 0;
}