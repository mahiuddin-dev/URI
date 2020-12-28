#include <iostream>
using namespace std;

int main(){
    short int usrTypePwd;
    while(1){
        cin>> usrTypePwd;
        if(2002 == usrTypePwd){
            cout<< "Acesso Permitido" <<endl;
            break;
        }else cout<< "Senha Invalida" <<endl;
    }
    return 0;
}

#include <stdio.h>
int main(){
    int x;
    while(1){
        scanf("%d", &x);
        if(x==2002){
            printf("Acesso Permitido\n");
            break;
        }
        else
            printf("Senha Invalida\n");
    }
    return 0;
}