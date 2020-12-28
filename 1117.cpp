/*
#include <iostream>
using namespace std;

int main (){
    
    float x,y;

    while(1){
        cin>>x;
        if(x < 0.0 || x >10.0){
            printf("nota invalida\n");
        }else{
            while(1){
                cin>>y;
                if(y < 0.0 || y > 10.0){
                    printf("nota invalida\n");
                }else{
                    printf("media = %.2f\n",(x + y) / 2);
                    break;
                }
            }
            break;
        }
    }
    return 0;
}

*/

#include <iostream>
using namespace std;

int main(){
    int i,j=0;
    float n, num[3],avg;

        while(1){
            cin>> n;
            if(n > 0 && n <= 10){
                num[j] = n;
                j++;
            }else cout<< "nota invalida" <<endl;
            if(j > 1) break;
        }
        avg = (num[0]+num[1]) / 2.0;
        printf("media = %.2f\n",avg);
    return 0;
}