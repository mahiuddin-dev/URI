/*
#include <iostream>
using namespace std;

int main(){
   short int sth,stm,eth,etm,sr,er,n;
    cin>> sth>>stm>>eth>>etm;
    if(sth == stm && eth == etm){
        cout<< "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" <<endl;
        return 0;
    }
    sth *= 60;
    eth *= 60;
    sr = sth + stm;
    er = eth + etm;
    n = er - sr;
    

    cout<< "O JOGO DUROU " << n/60 <<" HORA(S) E " << n%60 <<" MINUTO(S)" <<endl;
    

    return 0;
}

*/

// #include <iostream>
// using namespace std;

// int main(){
//     int sth, stm, eth, etm;
//     cin>>sth>>stm>>eth>>etm;
//     // scanf("%d %d %d %d", &sth, &stm, &stm, &etm);

//     if(etm < stm){
//         etm += 60;
//         eth -= 1;
//         etm -= stm;

//         if(eth < sth){
//             eth += 24;
//             eth -= sth;
//         }else eth -= sth;
//         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",eth,etm);
//     }
//     else if(sth == eth && stm == etm) printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
//     else if(etm > stm){
//         etm -= stm;
//         if(eth < sth){
//             eth += 24;
//             eth -= sth;
//         }else eth -= sth;
//         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",eth,etm);
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int initial_hour, final_hour, initial_minute, final_minute;
    int duration_hour, duration_min;

    scanf("%d %d %d %d", &initial_hour, &initial_minute, &final_hour, &final_minute);

    // duration_hour = final_hour - initial_hour;
    // if (duration_hour < 0){
    //     duration_hour = 24 + (initial_hour - final_hour);
    // }
    duration_min = final_minute - initial_minute;
    if (duration_min < 0){
        duration_min += 60 ;
        final_hour -= 1;
        
        if(final_hour < initial_hour){
            final_hour +=24;
            duration_hour = (final_hour - initial_hour);
        }else{
            duration_hour = (final_hour - initial_hour);
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hour, duration_min);
    }
    else if(duration_min > 0){
        if(final_hour < initial_hour){
            final_hour +=24;
            duration_hour = (final_hour - initial_hour);
        }else{
            duration_hour = (final_hour - initial_hour);
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hour, duration_min);
    }
    else if (initial_hour == final_hour && initial_minute == final_minute){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    return 0;
}