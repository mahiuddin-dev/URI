/*
#include <iostream>
using namespace std;

int main(){
    int i,n,m,j;
    
    cin>> n;
    float num[n][2];
    for(i = 0; i < n; i++){
        for(j = 0; j < 2; j++){
            cin>> m;
            num[i][j] = m;
        }
    }

    for(i = 0; i < n; i++){
       if(num[i][1] == 0) cout<< "divisao impossivel" <<endl;
       else{
             printf("%.1f\n", num[i][0]/num[i][1]); 
        }
        
    }

    return 0;
}
*/

#include <iostream>
using namespace std;

int main(){
    int n,i;
    float a,b;
    cin>> n;
    for(i = 0; i < n; i++){
        cin>> a>>b;
        if(b == 0) cout<< "divisao impossivel" <<endl;
        else printf("%.1f\n", a/b); 
    }
    return 0;
}
