#include <iostream>
using namespace std;

int main(){
    int Pa,Pb;
    unsigned short int y,n,i;
    float Ga,Gb;
    cin>> n;

    for(i = 0; i < n; i++){
        y = 0;
        cin>>Pa>>Pb>>Ga>>Gb;  
        while(Pa<=Pb){
            Pa = Pa+((Pa*Ga)/100);
            Pb = Pb+((Pb*Gb)/100);
            y++;
            if(y > 100){
                cout<< "Mais de 1 seculo." <<endl;
                break;
            }
        }  
        if(y <= 100){
            cout<<y <<" anos." <<endl;
        }
    }

    return 0;
}