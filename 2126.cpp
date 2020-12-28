#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    long int n1,i,m;
    long long int n2,j,n;
    vector <long int> are1;
    vector <long long int> are2;

    string number1,number2, nth;

    cin>>n1>>n2;

    number1 = to_string(n1); number2 = to_string(n2);

    for(i = 0; i < number1.size(); i++){
        nth =  number1[i];
        stringstream geek(nth);
        m = 0;
        geek >> m;
        are1.push_back(m);
    }

    for(j = 0; j < number2.size(); j++){
        nth =  number2[j];
        stringstream geek(nth);
        n = 0;
        geek >> n;
        are2.push_back(n);
    }


    for(i = 0; i < are1.size(); i++){
        for(j = 0; j < i+1; j++){
            if( are1[i] == are2[j] )
        }
    }

    
    return 0;
}










/*
78954
78954 78954 78954 78954 4 78954 78954

464133
13316 46546874694

12
12 31 32 14 55 12 32 14 56 54 23 1 12 
*/