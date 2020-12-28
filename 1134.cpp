#include <iostream>
using namespace std;

int main(){
    unsigned int n,Alcohol=0,Gasoline=0,Diesel=0;

    while (1){
        cin>>n;
        if(n == 1) Alcohol++;
        else if(n == 2) Gasoline++;
        else if(n == 3) Diesel++;
        else if(n == 4) break;
    }
    
    cout<< "MUITO OBRIGADO" <<endl;
    cout<< "Alcool: "<<Alcohol <<endl;
    cout<< "Gasolina: "<<Gasoline <<endl;
    cout<< "Diesel: "<<Diesel <<endl;
    return 0;
}