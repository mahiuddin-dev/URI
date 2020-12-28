// #include<stdio.h>
// int main()
// {
//  int I=1,J;
//  for(J=60;J>=0;J-=5){
//   printf("I=%d J=%d\n",I,J);
//   I+=3;
//  }
//  return 0;
// }

#include <iostream>
using namespace std;

int main(){
    short int i = 1, j;
    for(j = 60; j>=0; j-=5){
        printf("I=%d J=%d\n",i,j);
        i +=3;
    } 
    return 0;
}