#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <double> are;
    double n,m; short int i;
    cin>> n;
    are.push_back(n);

    for(i = 0; i < 100; i++){
        m = n/2;
        n = m;
        are.push_back(m);
        printf("N[%d] = %.4lf\n",i,are[i]);
    }
    return 0;
}