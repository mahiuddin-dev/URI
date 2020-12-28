#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
   short int i,are[4],a,b;

   for(i = 0; i < 4; i++){
       cin>> are[i];
   }
    sort(are, are + 4);

    a = are[0]+are[1];
    b = are[1]+are[2];

    if(are[3] < b || are[2] < a) cout<< "S" <<endl;
    else cout<< "N" <<endl;
 
    return 0;
}


//     short int i,j,are[4],temp;

//    for(i = 0; i < 4; i++){
//        cin>> are[i];

//        for(j =i+1; j < 4; j++){
//            if(are[i] < are[j]){
//                temp = are[j];
//                are[j] = are[i];
//                are[i] = temp;
//            }
//        }
//    }


    // vector <short int> are;
    // short int i,n;
    // for(i = 0; i < 4; i++){
    //     cin>> n;
    //     are.push_back(n);
    // }
    // sort(are.begin(), are.end(), greater<short int>()); 


//    int are[4],b,c,d,e,f, g;
//     for(b=0; b<4; b++)
//         scanf("%d", &are[b]);
//     for(b=0;b<4;b++){
//         for(c=b+1; c<4; c++){
//             if(are[c]<are[b]){
//                 e=are[b];
//                 are[b]=are[c];
//                 are[c]=e;
//             }
//         }
//     }

//    for(b = 0; b < 4; b++){
//        cout<< are[b] <<endl;
//    }







