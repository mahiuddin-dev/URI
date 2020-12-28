#include <iostream>
using namespace std;

int main(){
    int T,n;
    cin>> T;
    while(T--){
        cin>> n;
        if(n<2015) printf("%d D.C.\n", 2015 - n);
        else printf("%d A.C.\n", n - 2014);
    }
    return 0;
}

        // temp = (n-2015);
        // if(temp > 0) cout<< temp+1 <<" A.C." <<endl;
        // else if(temp == 0) cout<< temp+1 <<" D.C." <<endl;
        // else cout<< abs(temp) <<" D.C." <<endl;


// #include <stdio.h>
// int main(){
//     int tst;
//     scanf("%d", &tst);
//     while(tst--){
//         int year, dif;
//         scanf("%d", &dif);
        // if(dif<2015){
        //     year = 2015 - dif;
        //     printf("%d D.C.\n", year);
        // }
        // else{
        //     year = dif - 2014;
        //     printf("%d A.C.\n", year);
        // }
//     }
//     return 0;
// }