#include <iostream>
using namespace std;

int main(){
    unsigned short int n,i;
    cin>> n;
    int a,j,sum,x;

    for(i = 0; i < n; i++){
        cin>>a;
        sum = 0;
        x = a/2;
        for(j = 1; j <= x; j++){
            if(a % j == 0){
                sum +=j;
            }
        }
        if(sum == a) {
            cout<< a <<" eh perfeito" <<endl; 
        }
        else{
            cout<< a <<" nao eh perfeito" <<endl; 
        }
    }
    return 0;
}


// #include <stdio.h>
// int main()
// {
//     int N, X, a, b, c, d;
//     scanf("%d", &N);
//     for(a=1; a<=N; a++)
//     {
//         scanf("%d", &X);
//         c=X/2; d=0;
//         for(b=1; b<=c; b++)
//              {
//             if(X%b==0)
//                 d+=b;
//         }
//         if(d==X)
//             printf("%d eh perfeito\n",X);
//         else
//             printf("%d nao eh perfeito\n",X);
//     }
//     return 0;
// }