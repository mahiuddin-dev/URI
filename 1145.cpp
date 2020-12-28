#include <iostream>
using namespace std;

int main(){
    unsigned short int x;
    unsigned int y,i,m,j,n=1,l;
    cin>>x>>y;
    
    m = y/x;
    l = x;
    for(i = 1; i <= m; i++){
        cout<< n;
        for(j = n+1; j <= l; j++){
            cout<<" "<<j;
        }
        cout<<endl;
        n +=x; 
        l +=x;
    }
    return 0;
}