#include <iostream>
using namespace std;

int main(){
    short int i,n,number,chk = 21,sum;
    cin>> n;
    for(i = 0; i < n; i++){
        cin>> number;
        if(number < chk) {
            chk = number;
            sum = i+1;
        }
    }
    cout<< sum <<endl;
    return 0;
}


// #include<stdio.h>
// int main(){
//     int i,k,l,m,n;
//     scanf("%d",&n);
//     while(1){
//         l=21;
//         for(i = 0;i < n;i++){
//             scanf("%d",&m);
//             if(m<l){
//                 l=m;
//                 k=i+1;
//             }
//         }
//         printf("%d\n",k);
//         k=0;
//         break;
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int a,b,c,d=0,e=1;
//     scanf("%d", &a);
//     int ara[a];
//     for(b=0; b<a; b++)
//         scanf("%d", &ara[b]);

//     c=ara[d];
//     for(d=0; d<a; d++){
//         if(ara[d]<c){
//             c=ara[d];
//             e=d+1;
//         }

//     }
//     printf("%d\n", e);
//     return 0;
// }
