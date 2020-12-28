#include <iostream>
using namespace std;

int main(){
    unsigned int day,year,month;
    cin>>day;
    year = 0;
    month = 0;
    year = day / 365;
    day %= 365;
    month = day / 30;
    day %= 30;
    cout<< year<<" ano(s)\n"<<month<<" mes(es)\n"<<day<<" dia(s)"<<endl; 
    return 0;
}
