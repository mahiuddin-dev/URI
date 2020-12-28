#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> are;
    int n;
    unsigned short int i,count = 0;

    for(i = 0; i < 20; i++){
        cin>> n;
        are.push_back(n);
    }

    for(auto i = are.rbegin(); i < are.rend(); i++ ){
        cout<<"N["<<count<<"] = " << *i <<endl;
        count++;
    }

    

    return 0;
}