#include <iostream>
using namespace std;

int main(){
    int n,i,m,j,temp;
    cin>> n;
    int num[n][2];
    for(i = 0; i < n; i++){
        for(j = 0; j < 2; j++){
            cin>> m;
            num[i][j] = m;
            if(num[i][0] < num[i][j] ){
                temp = num[i][0];
                num[i][0] = num[i][j];
                num[i][j] = temp;
            }
        }
    }

    for(i = 0; i < n; i++){
        int sum = 0;
        for(j = num[i][1]+1; j < num[i][0]; j++){
            if(j % 2 != 0){
                sum+=j;
            }
        }
        cout<< sum <<endl;
    }

    return 0;
}