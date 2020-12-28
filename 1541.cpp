#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // short int a,b,c,area;
    // while(1){
    //     cin>>a;
    //     if(a == 0) break;
    //     cin>>b>>c;
    //     a*=b*(100/c);
    //     area = pow(a,.5);
    //     cout<<area <<endl;
    // }

    float a,b,c,x,y;
    while(1){
        cin>>a;
        if(a==0)break;
        cin>>b>>c;
        x = (((a*b)/c)*100);
        y=sqrt(x);
        printf("%d\n",(int)y);
    }
    return 0;
}