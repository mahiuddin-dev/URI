#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char craw[10];
    short int sum = 0,count=0;

    while(count != 3){
        cin>>craw;

        if(craw[0] == '*'){
            if(craw[1] == '-'){
                if(craw[2] == '-') sum += 4;
                else sum += 5;
            }else{
                if(craw[2] == '-') sum +=6;
                else sum += 7;
            }
        }else if(craw[0] == '-'){
            if(craw[1] == '-'){
                if(craw[2] == '-') sum +=0;
                else sum += 1;
            }else{
                if(craw[2] == '-') sum += 2;
                else sum += 3;
            }
        }

        if( craw[0] == 'c' ){
            cout<< sum <<endl;
            count++;
            sum = 0;
        }
        
    }

    return 0;
}



// if( strcmp(craw,"*--") == 0 ) sum += 4;
        // else if( strcmp(craw,"*-*") == 0 ) sum +=5;    
        // else if( strcmp(craw,"* -") == 0 ) sum +=6;    
        // else if( strcmp(craw,"* *") == 0 ) sum +=7;    
        // else if( strcmp(craw,"---") == 0 ) sum +=0; 
        // else if( strcmp(craw,"--*") == 0 ) sum +=1; 
        // else if( strcmp(craw,"- -") == 0 ) sum +=2; 
        // else if( strcmp(craw,"- *") == 0 ) sum +=3; 