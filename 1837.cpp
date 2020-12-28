#include <iostream>
using namespace std;

int main(){
//    short int a,b,q,r;
//     // cin>>a>>b;	
//     scanf("%hd %hd", &a,&b);
//     q=a/b;
//     r=a%b;
//     if(r<0){
//     	if(q<0) q--;
//         else q++;
//      r=a-(b*q);  
//     }
//     // cout<< q<<" "<<r <<endl;
//     printf("%hd %hd\n",q,r);


   short int a,b,e,f,q,r;
    // scanf("%d%d", &a, &b);
    cin>> a>>b;
    if(a<0){
        e=b;
        if(b<0) e=b*-1;
        for(r=0; r<e; r++){
            f=a-r;
            if(f%b==0) break;
        }
        q=f/b;
    }
    else{
        q=a/b;
        r=a%b;
    }
    // printf("%d %d\n",q,r);
    cout<< q <<" "<<r <<endl;

    return 0;
}