#include <iostream>
using namespace std;

int main(){
    short int ht,mt;

    while(scanf("%hd:%hd", &ht ,&mt) != EOF){
        cout<< "Atraso maximo: ";
        if(ht < 7 || (ht==7 && mt == 0)) cout<< 0 <<endl;
        else cout<< ((ht+1)-8)*60+mt <<endl;
    }

    // int a,b;
    // while(scanf("%d:%d", &a, &b)!=EOF){
    //     printf("Atraso maximo: ");
    //     if(a<7 || (a==7 && b==0)) printf("0\n");
    //     else printf("%d\n", ((a+1)-8)*60 + b);
    // }

    return 0;
}