#include <stdio.h>
#include <string.h>

int main(){
    short int n;
    scanf("%hd", &n);
    char course[100];

    while(n){
        gets(course);
        getchar();
        n--;
    }
    printf("Ciencia da Computacao\n");
    return 0;
}