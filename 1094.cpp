#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int n,i,ctotal=0,rtotal=0,ftotal=0,total=0;
    char c[] = "C",r[] = "R",s[] = "S";
    char cc[3];
    cin>> n;
    int animalNumber;
    for(i = 1; i <= n; i++){
        cin>>animalNumber>>cc;
        total += animalNumber;
        if(strcmp(cc,c) == 0){
            ctotal += animalNumber;
        }else if(strcmp(cc,r) == 0){
            rtotal +=animalNumber; 
        }else if(strcmp(cc,s) == 0){
            ftotal += animalNumber;
        }
    }

    cout<< "Total: "<<total<<" cobaias"<<endl<<"Total de coelhos: "<<ctotal <<endl<<"Total de ratos: "<<rtotal <<endl<<"Total de sapos: " <<ftotal <<endl;
    
    float cpersecntage,rpersecntage,spersecntage;
    cpersecntage = (ctotal*100.00)/total;
    rpersecntage = (rtotal*100.00)/total;
    spersecntage = (ftotal*100.00)/total;
    printf("Percentual de coelhos: %.2f %%\n",cpersecntage);
    printf("Percentual de ratos: %.2f %%\n",rpersecntage);
    printf("Percentual de sapos: %.2f %%\n",spersecntage);
    return 0;
}