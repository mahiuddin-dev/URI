/*
#include <iostream>
using namespace std;

int main(){
    int num[5],inputNumber,i,j = 0,temp;

    for(i = 0; i < 5; i++){
        cin>> inputNumber;
        num[i] = inputNumber;
    }

    for(i = 0; i < 5; i++){
        if(num[0] < num[i]){
            temp = num[i];
        } 
    }
    for(i = 0; i < 5; i++){
        j++;
        if(temp == num[i]){
            break;
        }
    }
    printf("%d\n", temp);
    printf("%d\n", j);
    return 0;
}

*/

#include <iostream>
using namespace std;

int main(){
    int input,i,highest=0,position;
    for(i = 1; i <= 100; i++){
        cin>> input;
        if(input > highest){
            highest = input;
            position = i;
        }
    }
    cout<<highest<<endl<<position<<endl;
    return 0;
}