#include <iostream>
using namespace std;

int main(){
    short int n,i,j,k=0;
    unsigned int count;

    while(scanf("%hd", &n) != EOF){
        k++; 
        // count = 1;
        // count += ((n*(n + 1)) / 2);
        if(n==0){
            cout<< "Caso "<<k<<": "<< ((n*(n + 1)) / 2)+1 <<" numero"<<endl;
        }else{
            cout<< "Caso "<<k<<": "<< ((n*(n + 1)) / 2)+1 <<" numeros"<<endl;
        }    
        cout<< 0;
        for(i = 1; i <= n; i++){
            for(j = 1; j <= i; j++){
            cout<<" "<< i;
            }
        }cout<<endl<<endl;
    }
    return 0;
}