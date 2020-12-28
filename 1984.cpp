// #include <iostream>
// using namespace std;

// int main(){
//     long int n, reverseNum = 0;
//     cin>>n;
//     while(n){
//         reverseNum *=10;
//         reverseNum += n%10;
//         n /=10;
//     }
//     cout<< reverseNum <<endl;
//     return 0;
// }

// #include <bits/stdc++.h> 
// #include <iostream>
// #include <sstream>  
// #include <algorithm>
// using namespace std;

// int main(){
//     long int number;
//     cin>> number;
//     stringstream ss;
//     ss << number;
//     string numberToStr = ss.str();

//     reverse(numberToStr.begin(), numberToStr.end());

//     cout << atol(numberToStr.c_str()) <<endl;
//     return 0;
// }


#include<stdio.h>

int main(){
    long long int n;
    int i,j,k;
    while(scanf("%lld",&n)!=EOF){
        while(n){
            i = n % 10;
            n = n / 10;
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}