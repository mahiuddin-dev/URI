#include <iostream>
using namespace std;

int main(){
    short int n,i,j,k,are[68][68];

    while( scanf("%hd",&n) != EOF){
        k = n-1;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(i == j) are[i][j] = 1;
                else are[i][j]=3;
                if(j == k) are[i][j] = 2;
            }
            k--;
        }

        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                cout<< are[i][j];
            }cout<<endl;
        }
    }    
    return 0;
}


// #include <iostream>
// using namespace std;

// int main(){
//   unsigned short int n,i,j;
//     while(scanf("%hd",&n)==1){
//         for(i=0;i<n;i++){
//             for(j=0;j<n;j++){
//                 if((i==j && i+j==n-1 ) || i+j==n-1)
//                     cout<< "2";
//                 else if(i==j)
//                     cout<< "1";
//                 else
//                     cout<< "3";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int r, c, n, i, j;
//    while (scanf (" %d", &n) == 1) {
//       for (i = 0; i < n; i++) {
//          for (j = 0; j < n; j++) {
//             if (i+j == n-1) printf ("2");
//             else if (i == j) printf ("1");
//             else printf ("3");
//          }
//          printf ("\n");
//       }
//    }
//     return 0;
// }


