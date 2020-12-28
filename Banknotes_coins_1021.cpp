/*
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double input;
    scanf("%lf",&input);
    // cin>> n;
    int n=input*100;
    // a=n/10000;    n=n%10000;
    // b=n/5000;     n=n%5000;
    // c=n/2000;     n=n%2000;
    // d=n/1000;     n=n%1000;
    // e=n/500;      n=n%500;
    // f=n/200;      n=n%200;
    // g=n/100;      n=n%100;
    // h=n/50;       n=n%50;
    // i=n/25;       n=n%25;
    // j=n/10;       n=n%10;
    // k=n/5;        n=n%5;
    // l=n;
    int m;
    short int i;
    int notas[] = {100,50,20,10,5,2};
    for(i = 0; i < 6; i++){
        m= n/(notas[i]*100);
        cout<<m<<" nota(s) de R$ "<< notas[i]<<".00"<<endl;
        n = n % (notas[i]*100);
    }
    cout<<"MOEDAS:"<<endl;
    double coin[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    for(i = 0; i < 6; i++){
        m = n/(coin[i]*100);
        printf("%d moeda(s) de R$ %.2lf\n",m,coin[i]);
        n = n % (int) (coin[i]*100);
    }
// setprecision(2)
 /*   printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n/10000);
    n %=10000;
    printf("%d nota(s) de R$ 50.00\n",n/5000);
    n %=5000;
    printf("%d nota(s) de R$ 20.00\n",n/2000);
    n %=2000;
    printf("%d nota(s) de R$ 10.00\n",n/1000);
    n %= 1000;
    printf("%d nota(s) de R$ 5.00\n",n/500);
    n %=500;
    printf("%d nota(s) de R$ 2.00\n",n/200);
    n %=200;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",n/100);
    n %=100;
    printf("%d moeda(s) de R$ 0.50\n",n/50);
    n %=50;
    printf("%d moeda(s) de R$ 0.25\n",n/25);
    n %=25;
    printf("%d moeda(s) de R$ 0.10\n",n/10);
    n %=10;
    printf("%d moeda(s) de R$ 0.05\n",n/5);
    n %=5;
    printf("%d moeda(s) de R$ 0.01\n",n);
    */
//     return 0;
// }

/*
// Problem 1021
#include <stdio.h>
int main()
{
    double N;
    int value;

    scanf("%lf", &N);
    value = N * 100;

       printf("NOTAS: \n");

        printf("%d nota(s) de R$ 100.00\n", value / (100 * 100)); 
        value = value % (100 * 100);

        printf("%d nota(s) de R$ 50,00\n", value / (50 * 100));
        value = value % (50 * 100);

        printf("%d nota(s) de R$ 20.00\n", value / (20 * 100));
        value = value % (20 * 100);

        printf("%d nota(s) de R$ 10.00\n", value / (10 * 100));
        value = value % (10 * 100);

        printf("%d nota(s) de R$ 5.00\n", value / (5 * 100));
        value = value % (5 * 100);

        printf("%d nota(s) de R$ 2.00\n", value / (2 * 100));
        value = value % (2 * 100);

        // coins er hisab suru
        printf("MOEDAS: \n");

        printf("%d nota(s) de R$ 1.00\n", value / (1 * 100));
        value = value % (1 * 100);

        printf("%d nota(s) de R$ 0.50\n", value / (50)); //100 * 0.50 = 50
        value = value % (50);

        printf("%d nota(s) de R$ 0.25\n", value / (25)); 
        value = value % (25);

        printf("%d nota(s) de R$ 0.10\n", value / (10)); 
        value = value % (10);

        printf("%d nota(s) de R$ 0.05\n", value / (5)); 
        value = value % (5);

        printf("%d nota(s) de R$ 0.01\n", value / (1)); //100 * 0.01 = 1


    return 0;
}

*/

#include <stdio.h>
 
int main() {
    double input;
    int n;
    scanf("%lf",&input);
    n=input*100;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n/10000);
    n %=10000;
    printf("%d nota(s) de R$ 50.00\n",n/5000);
    n %=5000;
    printf("%d nota(s) de R$ 20.00\n",n/2000);
    n %=2000;
    printf("%d nota(s) de R$ 10.00\n",n/1000);
    n %= 1000;
    printf("%d nota(s) de R$ 5.00\n",n/500);
    n %=500;
    printf("%d nota(s) de R$ 2.00\n",n/200);
    n %=200;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",n/100);
    n %=100;
    printf("%d moeda(s) de R$ 0.50\n",n/50);
    n %=50;
    printf("%d moeda(s) de R$ 0.25\n",n/25);
    n %=25;
    printf("%d moeda(s) de R$ 0.10\n",n/10);
    n %=10;
    printf("%d moeda(s) de R$ 0.05\n",n/5);
    n %=5;
    printf("%d moeda(s) de R$ 0.01\n",n);
    return 0;
}