#include <iostream>
using namespace std;

int main(){
    short int n,i,j,are[102][102],k,l;
    while(scanf("%hd", &n) != EOF){
        l = n/3;
        k = n-1;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if( i == j) are[i][j] = 2;
                else if( j == k) are[i][j] = 3;
                else are[i][j] = 0;
            }k--;
        }

        for(i = l; i < n-l; i++){
            for(j = l; j < n-l; j++){
                are[i][j] = 1;
                if(i == n/2 && j == n/2) are[i][j] = 4;
            }
        }

        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                cout<< are[i][j];
            }cout <<endl;
        }cout<<endl;
    } 
    return 0;
}


// #include <iostream>
// using namespace std;

// int main(){
//     short int n,size,i,j;
//     bool x;
//     while(cin>>n){
//          size=n/3;
//          x=false;
//         for(i=0;i<n;i++) {
//             if(i==size) x=true;
//             if(n-i==size) x=false;
        
//         if(!x){
//             for( j=0;j<n;j++){
//                 if(n-1-j==i){
//                     cout<<3;
//                     continue;
//                     }
//                 if(i==j){
//                         cout<<2;
//                     }
//                     else{
//                         cout<<0;
//                         continue;
//                     }
//             }
//             cout<<endl;
//         }
//         else{
//            for(j=0;j<n;j++){
//                if(i==n/2&&j==n/2)
//                 cout<<4;
//                else if(j<size)
//                 cout<<0;
//                 else if(n-1-j<size)
//                     cout<<0;
//                 else
//                 cout<<1;
//            }
//            cout<<endl;
//         }
//         }
//         cout<<endl;
//     }
//     return 0;
// }