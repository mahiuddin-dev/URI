#include <iostream>
using namespace std;

int main(){
    int n,i,sum;

    while(1){
        sum =0;
        cin>> n;
        if (n % 2 != 0) n++;
        else if(n == 0) break;

        for(i = 1; i <= 5 ; i++){
            if(n %2 == 0) {
                sum += n;
                n +=2;
            } 
        }
        cout<< sum <<endl;
    }
    return 0;
}