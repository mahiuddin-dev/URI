// #include <iostream>
// #include <string.h>
// using namespace std;

// int main(){
//     char abcText[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
//     char inputText[2],myText[2];
//     short int i,count = 0;
//     // cin.get(inputText,2);
//     cin>> inputText;


//     for(i = 0; i < 26; i++){   
//         count++; 
//         if(strcmp(abcText[i],inputText) == 0 ){
//             cout<< count <<endl;
//             break;
//         }
//     }

//     return 0;
// }


// #include <stdio.h>

// int main(int argc, char **argv){

//     char c;
//     int i, j;
//     char str[27];

//     for (i = 'A', j = 1; i <= 'Z'; ++i, ++j)
//         str[i] = j;

//     scanf("%c", &c);
//     printf("%d\n", str[c]);

//     return 0;

// }

#include <iostream>
using namespace std;

int main(){
    char c,str[27];
    short i,j;
    for(i = 'A', j = 1; i <= 'Z'; ++i, ++j){
        str[i] = j;
    }
    cin>> c;
    cout<< (short int) str[c] <<endl;
    return 0;
}