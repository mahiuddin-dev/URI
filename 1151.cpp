#include <iostream>
using namespace std;

int main(){
    unsigned short int n;
    int i,frist=1,next=1,temp;
    cin>> n;
        cout<< 0;
        for(i = 1; i < n; i++){
            cout<< " "<<frist ;
            temp = frist+next;
            frist = next;
            next = temp;
        }
        cout<<endl;

    return 0;
}