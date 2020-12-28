
#include <iostream>
using namespace std;

int main(){
    int n = 140153, hours, minutes, seconds;
    hours = n / 3600;
    seconds = n % 3600;
    minutes = seconds / 60;
    seconds = (n % 3600) % 60;
    cout<< hours <<endl<<minutes<<endl<<seconds<<endl;
    return 0;
}