#include <iostream>
using namespace std;

int main(){
    short int i,j,n;
    char sm[2];
    cin>>n>>sm;
    double are[12][12], sum = 0.0;

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            cin>> are[i][j];
        }
    }

    for(i = 0; i < 12; i++){
        sum += are[i][n];
    }

    if(sm == "S"){
        printf("%.1lf\n",sum);
    }else{
        printf("%.1lf\n",sum/12);
    }

    return 0;
}