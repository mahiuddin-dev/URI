#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> num;
    int v,i; 
    cin>>v;
    
    for(i = 0; i < 10; i++){
        num.push_back(v);
        v = v*2;
    }
    for(i = 0; i < 10; i++){
        cout<<"N["<<i <<"] = " <<num[i] <<endl;
    }

    return 0;
}