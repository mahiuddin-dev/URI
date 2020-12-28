#include<stdio.h>
#include<string.h>

int main(){
    char craw[10];
    short int sum=0,count=0;
    while( count != 3){
        gets(craw);
        
        if(craw[0]=='*'){
            if(craw[1]=='-'){
                if(craw[2]=='-')sum += 4;
                else sum += 5;
            }else {
                if(craw[2]=='-')sum += 6;
                else sum += 7;
            }
        }else if(craw[0]=='-'){
            if(craw[1]=='-'){
                if(craw[2]=='-')sum += 0;
                else sum += 1;
            } else {
                if(craw[2]=='-')sum += 2;
                else sum += 3;
            }
        }
        if(craw[0]=='c'){
            printf("%d\n",sum);
            count++;
            sum=0;
        }
    }
    return 0;
}


