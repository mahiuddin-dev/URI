#include <iostream>
using namespace std;

int main(){
    short int d1,sh,sm,ss,d2,eh,em,es;
    char day[5],col[3];
    int startTime,endTime;
    cin>>day>>d1>>sh>>col>>sm>>col>>ss>>day>>d2>>eh>>col>>em>>col>>es;

    startTime = (d1*86400) + (sh*3600) + sm*60 + ss;
    endTime = (d2*86400) + (eh*3600) + em*60 + es;
    endTime -= startTime;
    
    cout<< endTime/86400<<" dia(s)" <<endl;
    endTime %= 86400;
    cout<< endTime/3600<< " hora(s)" <<endl;
    endTime %= 3600;
    cout<< endTime/60<< " minuto(s)" <<endl;
    endTime %= 60;
    cout<< endTime<< " segundo(s)" <<endl;

    return 0;
}

/*
Dia 5
08 : 12 : 23
Dia 9
06 : 13 : 23
*/
