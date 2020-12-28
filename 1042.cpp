#include <iostream>
using namespace std;

int main(){
    int inputNumber[3],sortNumber[3],i,j,temp;

    for(i = 0; i < 3; i++){
        cin>> inputNumber[i];
        sortNumber[i] = inputNumber[i];
    }
    for(i = 0; i < 2; i++){
        for(j = i+1; j < 3; j++){
            if(sortNumber[i] > sortNumber[j]){
                temp = sortNumber[i];
                sortNumber[i] = sortNumber[j];
                sortNumber[j] = temp;
            }
        }
    }

    for(i = 0; i < 3; i++){
        cout<< sortNumber[i] <<endl;
    }
    cout<<endl;
    for(i = 0; i < 3; i++){
        cout<< inputNumber[i] <<endl;
    }

    return 0;
}