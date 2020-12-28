#include <iostream>
#include <string.h>
using namespace std;

int main(){
    short int n,i;
    cin>> n;
    char c1[8],c2[8];
    for(i = 1; i <= n; i++){
        cin>> c1>>c2;

        if(!strcmp(c1,c2) ) cout<< "Caso #"<<i<<": De novo!" <<endl;

        else if(!strcmp(c1,"tesoura")){
            if(!strcmp(c2,"papel") || !strcmp(c2,"lagarto") ) cout<< "Caso #"<<i<<": Bazinga!" <<endl;
            else if(!strcmp(c2,"pedra") || !strcmp(c2,"Spock")) cout<< "Caso #"<<i<<": Raj trapaceou!" <<endl;
        }
        else if(!strcmp(c1,"papel")){
            if(!strcmp(c2,"pedra") || !strcmp(c2,"Spock")) cout<< "Caso #"<<i<<": Bazinga!" <<endl;
            else if(!strcmp(c2,"tesoura") || !strcmp(c2,"lagarto")) cout<< "Caso #"<<i<<": Raj trapaceou!" <<endl;
        }
        else if(!strcmp(c1,"pedra")){
            if(!strcmp(c2,"lagarto") || !strcmp(c2,"tesoura")) cout<< "Caso #"<<i<<": Bazinga!" <<endl;
            else if(!strcmp(c2,"Spock") || !strcmp(c2,"papel")) cout<< "Caso #"<<i<<": Raj trapaceou!" <<endl;
        }
        else if(!strcmp(c1,"lagarto")){
            if(!strcmp(c2,"Spock") || !strcmp(c2,"papel")) cout<< "Caso #"<<i<<": Bazinga!" <<endl;
            else if(!strcmp(c2,"tesoura") || !strcmp(c2,"pedra")) cout<< "Caso #"<<i<<": Raj trapaceou!" <<endl;
        }
        else if(!strcmp(c1,"Spock")){
            if(!strcmp(c2,"tesoura") || !strcmp(c2,"pedra")) cout<< "Caso #"<<i<<": Bazinga!" <<endl;
            else if(!strcmp(c2,"papel") || !strcmp(c2,"lagarto")) cout<< "Caso #"<<i<<": Raj trapaceou!" <<endl;
        }
    }
    return 0;
}


// #include <iostream>
// #include <cstring>

// using namespace std;

// int main(){
// 	short int n,i;
// 	string a, b;
// 	cin >> n;

	
// 	for ( i = 1; i <= n; ++i){
// 		cin >> a >> b;
// 		if(a == b) printf("Caso #%d: De novo!n", i);
// 		else if(a == "tesoura" && b == "papel") printf("Caso #%d: Bazinga!n\n", i);
// 		else if(a == "papel" && b == "pedra") printf("Caso #%d: Bazinga!n\n", i);
// 		else if(a == "pedra" && b == "lagarto") printf("Caso #%d: Bazinga!n\n", i);
// 		else if(a == "lagarto" && b == "Spock") printf("Caso #%d: Bazinga!n\n", i);
// 		else if(a == "Spock" && b == "tesoura") printf("Caso #%d: Bazinga!n\n", i);
// 		else if(a == "tesoura" && b == "lagarto") printf("Caso #%d: Bazinga!n\n", i);
// 		else if(a == "lagarto" && b == "papel") printf("Caso #%d: Bazinga!n\n", i);
// 		else if(a == "papel" && b == "Spock") printf("Caso #%d: Bazinga!n\n", i);
// 		else if(a == "Spock" && b == "pedra") printf("Caso #%d: Bazinga!n\n", i);
// 		else if(a == "pedra" && b == "tesoura") printf("Caso #%d: Bazinga!n\n", i);
// 		else printf("Caso #%d: Raj trapaceou!n\n", i);
// 	}
// 	return 0;
// }