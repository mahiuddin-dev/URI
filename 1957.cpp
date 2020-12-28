// #include <bits/stdc++.h>

// using namespace std;

// char r[10],d[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
// int n,k;

// int main(){
//     scanf("%d",&n);
//     while(n){
//         r[k++] = d[n%16];
//         n /= 16;
//     }
//     while(k--) printf("%c",r[k]);
//     printf("\n");
//     return 0;
// }


#include <iostream>
using namespace std;

char hexNum[10], hexChar[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int n,i;

int main(){
    cin>> n;
    while(n){
        hexNum[i++] = hexChar[n%16];
        n /= 16;
    }
    while(i--) cout<< hexNum[i];
    cout <<endl;
    return 0;
}