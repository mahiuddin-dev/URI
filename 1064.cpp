/*
#include <iostream>
using namespace std;

int main(){
    float num[6],m,total = 0;
    short int i,pos = 0;

    for(i = 0; i < 6; i++){
        cin>>m;
        num[i] = m;
    }

    for(i = 0; i < 6; i++){
        if(num[i] > 0){
            pos ++;
            total += num[i];
        } 
    }
    cout<<pos<<" valores positivos"<<endl;
    printf("%.1f\n", total/pos);
    return 0;
}
*/

#include <stdio.h>
 
int main() {
 
    int i,j=0;
    float avg,n,m=0;
    for(i=0; i<6;i++){
        scanf("%f",&n);
        if(n>0){
            m+=n;
            j++;
        };   
    }
    avg =m/j;
    printf("%d valores positivos\n%.1f\n",j,avg);
    return 0;
}