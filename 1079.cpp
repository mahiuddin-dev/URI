#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cin>> n;
    float num[n][3],inputValue, val[] = {2.0,3.0,5.0};

    for(i = 0; i < n; i++){
        for(j = 0; j < 3; j++){
            cin>> inputValue;
            num[i][j] = inputValue;
        }
    }

    for(i = 0; i < n; i++){
       float total = 0;
        for(j = 0; j < 3; j++){
            total += (num[i][j]*val[j]); 
        }
        printf("%.1f\n",total/10);
    }

    

    return 0;
}