#include <iostream>
using namespace std;

int main(){
    unsigned short int n,i,j;
    cin>> n;

    for(i = 0, j =0; i < 1000; i++){
       cout<<"N["<<i <<"] = " << j <<endl;
        j++;
        if(j == n) j =0;
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int N[1000], x, y,z;
//     scanf ("%d", &x);
//     for(y=0,z=0; y<1000; y++)
//     {
//         printf("N[%d] = %d\n",y,z);
//         z++;
//         if(z==x)
//             z=0;
//     }
//     return 0;
// }