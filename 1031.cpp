

#include <iostream>
using namespace std;

int main(){
    int a,b,n,matchCount = 0, inter=0,gremio=0, draw=0; 
    while(1){
        cin>>a>>b;
        matchCount++;
        cout<< "Novo grenal (1-sim 2-nao)" <<endl;
        cin>> n;
        if(a > b) inter++;
        else if (a < b) gremio++;
        else draw++;

        if(n == 1) continue;
        else break;
    }
        cout<< matchCount << " grenais" <<endl<< "Inter:" << inter <<endl<< "Gremio:" << gremio <<endl<< "Empates:" << draw <<endl;

        if(inter > gremio) cout<< "Inter venceu mais" <<endl;
        else if(inter < gremio) cout<< "Gremio venceu mais" <<endl;
        else cout<< "Não houve vencedor" <<endl;
    
    return 0;
}

