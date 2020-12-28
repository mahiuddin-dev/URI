#include <iostream>
using namespace std;

int main(){
    short int n,i,slugs,k;
    
    while(scanf("%hd", &n) != EOF){
        k = 0;
        for(i = 0; i < n; i++){
            cin>> slugs;
            if(slugs >= k) k = slugs;
        }
        if(k >= 20) cout<< 3 <<endl;
        else if(k > 9) cout<< 2 <<endl;
        else (k < 10) cout<< 1 <<endl;
    }

    return 0;
}