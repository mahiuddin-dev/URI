/*
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> even,odd;
    unsigned short int i,j;
    short int n;
    for(i = 0; i < 15; i++){
        cin>> n;
        if(n % 2 == 0) {
            even.push_back(n);
            if(even.size() == 5){
                for(j = 0; j < 5; j++){
                    cout<<"par["<<j<<"] = "<<even[j] <<endl;
                    even.clear();
                }
            }
        }
        else {
            odd.push_back(n);
            if(odd.size() == 5){
                for(j = 0; j < 5; j++){
                    cout<<"impar["<<j<<"] = "<<odd[j] <<endl;
                    odd.clear();
                }

            }
        }

    }


    for(i = 0; i < odd.size(); i++){
        if( odd[i] == 0 ) break;
        else cout<<"impar["<<i<<"] = "<<odd[i] <<endl;
    }

    for(i = 0; i < even.size(); i++){
        if( even[i] == 0 ) break;
       else cout<<"par["<<i<<"] = "<<even[i] <<endl;
    }


    return 0;
}

*/

#include <iostream>
     
int main(){
    int a, p, i, b;
    
    int par[5];
    int impar[5];
    
    p = 0;
    i = 0;
    
    for(int j = 0; j < 15; j++){
            std::cin >> a;
            if(a%2 == 0){
                    par[p] = a;
                    p++;
            }else{
                  impar[i] = a;
                  i++;
            }
            
            if(p == 5){
                 b = 0;
                 while(b != 5){ std::cout << "par[" << b << "] = " << par[b] << "\n"; b++;}
                 p = 0;
            }
            if(i == 5){
                 b = 0;
                 while(b != 5){ std::cout << "impar[" << b << "] = " << impar[b] << "\n"; b++;}
                 i = 0;
            }
            if(j == 14){
                 b = 0;
                 while(b < i){ std::cout << "impar[" << b << "] = " << impar[b] << "\n"; b++;}
                 b = 0;
                 while(b < p){ std::cout << "par[" << b << "] = " << par[b] << "\n"; b++;}
            }
                 
    }
    return 0;
}