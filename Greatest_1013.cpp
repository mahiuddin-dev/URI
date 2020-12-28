#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int max_value = a;
    if(b > max_value) max_value = b;
    if(c > max_value) max_value = c;
    
    // printf("%d eh o maior\n", max_value);
    cout<<max_value<<" eh o maior"<<endl;
    return 0;
}