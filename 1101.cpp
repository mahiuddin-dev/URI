#include <iostream>
using namespace std;

int main(){
    int num[2],m,i,temp;

    while(1){
        int sum=0;
        for(i = 0; i < 2; i++){
            cin>> m;
            num[i] = m;
            if(num[0] > num[i]){
                temp = num[0];
                num[0] = num[i];
                num[i] = temp;
            }
        }
    if(num[0] <= 0 || num[1] <= 0) break;
      else{  for(i = num[0]; i <= num[1]; i++){
                cout<< i <<" ";
                sum += i;
            }
             cout<< "Sum="<<sum <<endl;
      }
    }
    
    return 0;
}