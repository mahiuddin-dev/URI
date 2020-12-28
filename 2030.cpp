
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    short int n;
    char a[7],b[7];

    cin>> n;
    while(n--){
        cin>>a>>b;

        if( strcmp(a,"ataque") == 0 && strcmp(b,"papel") == 0){
            cout<< "Jogador 1 venceu" <<endl;
        }else if( strcmp(a,"papel") == 0 && strcmp(b,"ataque") == 0){
            cout<< "Jogador 2 venceu" <<endl;
        }

        else if( strcmp(a,"ataque") == 0 && strcmp(b,"pedra") == 0){
             cout<< "Jogador 1 venceu" <<endl;
        }else if( strcmp(a,"pedra") == 0 && strcmp(b,"ataque") == 0){
            cout<< "Jogador 2 venceu" <<endl;
        }

        else if( strcmp(a,"pedra") == 0 && strcmp(b,"papel") == 0){
            cout<< "Jogador 1 venceu" <<endl;
        }else if( strcmp(a,"papel") == 0 && strcmp(b,"pedra") == 0){
            cout<< "Jogador 2 venceu" <<endl;
        }

        else if( strcmp(a,"papel") == 0 && strcmp(b,"papel") == 0){
            cout<< "Ambos venceram" <<endl;
        }

       else if( strcmp(a,"pedra") == 0 && strcmp(b,"pedra") == 0) {
            cout<< "Sem ganhador" <<endl;
        }

        else if( strcmp(a,"ataque") == 0 && strcmp(b,"ataque") == 0){
            cout<< "Aniquilacao mutua" <<endl;
        }

    }
    return 0;
}




// #include <iostream>
// using namespace std;

// int main(){
//     short int n;
//     char a[7],b[7];

//     cin>> n;
//     while(n--){
//         cin>>a>>b;

//         if( a[0] == 'a' && b[1] == 'pa'){
//             cout<< "Jogador 1 venceu" <<endl;
//         }else if( a[1] == 'pa' && a[0] == 'a'){
//             cout<< "Jogador 2 venceu" <<endl;
//         }

//         else if( a[0] == 'a' && b[1] == 'pe'){
//             cout<< "Jogador 1 venceu" <<endl;
//         }else if( a[1] == 'pe' && a[0] == 'a'){
//             cout<< "Jogador 2 venceu" <<endl;
//         }

//         else if( a[1] == 'pe' && b[1] == 'pa'){
//             cout<< "Jogador 1 venceu" <<endl;
//         }else if( a[1] == 'pa' && a[1] == 'pe'){
//             cout<< "Jogador 2 venceu" <<endl;
//         }

//         else if( a[1] == 'pa' && b[1] == 'pa' == 0){
//             cout<< "Ambos venceram" <<endl;
//         }

//        else if( a[2] == 'pe' && b[2] == 'pe') {
//             cout<< "Sem ganhador" <<endl;
//         }

//         else if( a[0] == 'a' && b[0] == 'a'){
//             cout<< "Aniquilacao mutua" <<endl;
//         }

//     }
//     return 0;
// }

