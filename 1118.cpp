#include <iostream>
using namespace std;

void studentResult(float x, float y);

int main(){
    float x,y;
    short int n;
    studentResult(x,y);
    cout<< "novo calculo (1-sim 2-nao)" <<endl;
    while(1){
        cin>> n;
        if(n == 1){
            studentResult(x,y);
            cout<< "novo calculo (1-sim 2-nao)" <<endl;
        }else if(n == 2) break;
        else{
            cout<< "novo calculo (1-sim 2-nao)" <<endl;
        }
    }

    return 0;
}

void studentResult(float x, float y){
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
}