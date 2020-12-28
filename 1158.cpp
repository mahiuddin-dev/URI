#include <iostream>
using namespace std;

int main(){
    int n,x,y,i,j,total = 0;
    cin>> n;
    int sum[n];

    for(i = 0; i < n; i++){
        cin>> x>>y;
        for(j = 0; j <y; j++){
            if(x % 2 != 0) {
                total +=x; 
                sum[i] = total;
                x +=2;
            }else{
                x++;
                y++;
            }

        }
        total = 0;
    }
    for(i = 0; i < n; i++){
        cout<< sum[i] <<endl;
    }
    return 0;
}