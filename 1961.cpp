#include <iostream>
using namespace std;

int main(){
    short int frogJumpHeight, pipesNum,i,temp,count = 0;
    cin>> frogJumpHeight>>pipesNum;

    short int are[pipesNum];

    for(i = 0; i < pipesNum; i++){
        cin>> are[i];
    }
    for(i = 1; i < pipesNum; i++){
        temp =are[i-1] - are[i]; 
        if(abs(temp) > frogJumpHeight) {
            count++;
            cout<< "GAME OVER" <<endl;
            break;
        }
    }
    if(count == 0) cout<< "YOU WIN" <<endl;
    return 0;
}


// cin>> pipesheight;

        // temp = pipesheight;

        // if(pipesheight > frogJumpHeight) {
        //     count++;
        //     cout<< "GAME OVER" <<endl; 
        //     break;
        // }
        // temp = pipesheight+frogJumpHeight; if(count == 0) cout<< "YOU WIN" <<endl;