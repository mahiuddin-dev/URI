#include <iostream>
using namespace std;

int main(){
    int num[5],m,i,even = 0,odd=0, pos=0,neg = 0;

    for(i = 0; i < 5; i++){
        cin>> m;
        num[i] = m;
    }

    for(i = 0; i < 5; i++){
        if(num[i] % 2 == 0) even++;
        else odd++;

        if(num[i] > 0) pos++;
        else if(num[i] < 0) neg++;
    }

    cout<< even<< " valor(es) par(es)" << endl << odd << " valor(es) impar(es)"<< endl << pos << " valor(es) positivo(s)"<< endl << neg << " valor(es) negativo(s)"<<endl;
    return 0;
}