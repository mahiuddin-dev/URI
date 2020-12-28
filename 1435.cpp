
/*
#include <iostream>
using namespace std;

int main(){
     short int n,i,j,k,half_n,b;

    while(1){
        cin>> n;
        if(n == 0) break;
        else{ 
            short int are[n][n];

            half_n = n/2;

            if(n%2 != 0) half_n++;

            b = n-1;

            for(k = 1; k <= half_n; k++){
                for(i = k-1; i <= b; i++){
                    for(j = k-1; j <= b; j++){
                        are[i][j] = k;
                    }    
                }
                b--;
            }

            for(i = 0; i < n; i++){
                for(j = 0; j < n; j++){
                    if(j == 0) printf("%3d",are[i][j]);
                    else printf(" %3d",are[i][j]);
                }cout<<endl;
            }cout<<endl;
        }
    }
    return 0;
}

*/



/*
#include <iostream>
using namespace std;

int main(){
    short int i,j,k,n,b,half;
    
    while(1){
        cin>> n;
        if(n == 0) break;
        short int are[n][n];
        b= n-1;
        half = n/2;
        if(n%2 != 0) half++;

        for(k = 1; k<= half;k++){
            for(i = k-1; i <= b; i++){
                for(j = k-1; j <= b; j++){
                    are[i][j] = k;
                }
            } b--;
        }

        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(j == 0) printf("%3d",are[i][j]);
                else printf(" %3d",are[i][j]);
            }cout<<endl;
        }cout <<endl;
        

    } 
    return 0;
}
*/



#include <iostream>
using namespace std;

int main(){
    short int i,j,x,n;
    while(1){
        cin>> n;
        if(n==0)break;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                x = i;
                if(j < x)x = j;
                if(n-i+1 < x)x = n-i+1;
                if(n-j+1 < x)x = n-j+1;
                printf("%3d",x);
                if(j < n)printf(" ");
                else printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}



// #include <iostream>
// using namespace std;

// int main(){
//     int n;

//     scanf("%d",&n);
//     double m[n][n];

//         int i,j;

//         for(i=0;i<n;i++)
//             {
//             for(j=0;j<n;j++)
//             {
//                    printf(" 1");
//             }
//             printf("\n\n");
//         }
//     return 0;
 
// }