#include <iostream>
using namespace std;

int main(){
    short int n;
    float mark,highestMarks = 7.0;
    cin>> n;
    unsigned int roll,selectedStudentRoll;

    while(n--){
        cin>> roll>>mark;
        if(mark > highestMarks){
            highestMarks = mark;
            selectedStudentRoll = roll;
        }
    }

    if(highestMarks >= 8.0){
        cout<< selectedStudentRoll <<endl;
    }else cout<< "Minimum note not reached" <<endl;


    return 0;
}

/* 
4
900775 9.4
999999 9.9
10022 9.7
441002 9.8  */