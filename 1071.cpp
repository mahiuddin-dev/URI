#include <iostream>
using namespace std;

int main(){
    int n1,n2,temp,sum = 0;
    cin>> n1>>n2;

    if(n1 > n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    for(n1 = n1+1; n1 <=n2-1; n1++){
        if(n1%2 != 0) sum += n1;
    }

    cout<< n1 <<endl;
    
    return 0;
}
