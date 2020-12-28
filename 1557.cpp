// #include <iostream>
// using namespace std;

// int main(){
//     short int n,i,j;
//     long long int are[15][15],k,l;
//     while(1){
//         cin>> n;
//         if(n == 0) break;
//         l = 1;

//         for(i = 0; i < n; i++){
//             k = l;
//             for(j = 0; j < n; j++){
//                 are[i][j] = k;
//                 k += k;
//             } l+=l;
//         }

//         for(i = 0; i < n; i++){
//             for(j = 0; j < n; j++){
//                 cout<< are[i][j];
//             }cout<<endl;
//         }cout<<endl;

//     }
//     return 0;  268435456
// }


#include <iostream>
using namespace std;

int main(){
    // short int n,i,j,k,l;
    // long long int are[15][15],n,i,j,k,l;
    unsigned int are[15][15],k;
    short int n,l,i,j;
    while(1){
        cin>>n;
        if(n == 0) break;
        l = 1;
        for(i = 0; i < n; i++){
            k = l;
            for(j = 0; j < n; j++){
                are[i][j] = k;
                k += k;
            }l +=l;
        }

        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(n == 1) printf("%u",are[i][j]);
                else if(n == 2){
                    if(j == 0)cout<< are[i][j];
                    else printf(" %u",are[i][j]);
                }
                else if(n == 3 || n == 4){
                    if(j == 0)printf(" %u",are[i][j]);
                    else printf("%3u",are[i][j]);
                }
                else if(n == 5){
                    if(j == 0)printf("%3u",are[i][j]);
                    else printf("%4u",are[i][j]);
                }
                else if(n == 6 || n ==7){
                    if(j == 0)printf("%4u",are[i][j]);
                    else printf("%5u",are[i][j]);
                }
                else if(n == 8 || n ==9){
                    if(j == 0)printf("%5u",are[i][j]);
                    else printf("%6u",are[i][j]);
                }
                else if(n == 10){
                    if(j == 0)printf("%6u",are[i][j]);
                    else printf("%7u",are[i][j]);
                }
                else if(n == 11 || n == 12){
                    if(j == 0)printf("%7u",are[i][j]);
                    else printf("%8u",are[i][j]);
                }
                else if(n == 13 || n == 14){
                    if(j == 0)printf("%8u",are[i][j]);
                    else printf("%9u",are[i][j]);
                }
                else if(n == 15){
                    if(j == 0)printf("%9u",are[i][j]);
                    else printf("%10u",are[i][j]);
                }
               
            }cout<<endl;
        }cout<<endl;
    }
    return 0;
}