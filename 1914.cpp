#include <iostream>
using namespace std;

int main(){
    short int n;
    cin>> n;
    int n1,n2;
    char name1[100],name2[100],par[6],impar[6];

    while(n){
        cin>> name1>>par>>name2>>impar>>n1>>n2;
        n1 +=n2;
        if(n1%2 == 0){
            if(par[0] == 'P') cout<< name1 <<endl;
            else cout<< name2 <<endl;
        }else{
            if(par[0] == 'I') cout<< name1 <<endl;
            else cout<< name2 <<endl;
        }
        n--;
    }

    return 0;
}