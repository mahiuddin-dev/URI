/*
#include <iostream>
using namespace std;

int main(){
    float salary,tax;
    cin>> salary;
    
    if(salary < 2000.00) cout<< "Isento" <<endl;

    else{
        salary = salary - 2000.00;
        
        if(0<salary && salary <= 1000){
            tax = salary*0.08;
            salary -= 1000.00; 
        }else if(salary > 1000){
            tax = 1000*0.08;
            salary -= 1000.00;
        }

        if(0<salary && salary <= 1500){
            tax = (salary*0.18) + tax ;
            salary -= 1500.00;
        }else if(salary > 1500){
            tax = (1500*0.18) + tax ;
            salary -= 1500.00;
        }

        if( salary > 0){
            tax = (salary*0.28) + tax ;
        }
        printf("R$ %.2f\n",tax);
        
    } 

    return 0;
}

*/
/*

#include <iostream>
using namespace std;

int main(){
    float salary,tax;
    cin>> salary;

    if(salary < 2000.00) cout<< "Isento" <<endl;
    else{
        salary = salary - 2000.00;

        if(salary > 0 && salary <= 1000.00){
            tax = salary*0.08;
            salary -= 1000.00;
        }else if ( salary > 1000.00 ) {
            tax = 1000*0.08;
            salary -= 1000.00;
        }

        if(salary > 0 && salary <= 1500.00){
            tax = (salary*0.18) + tax;
            salary -= 1500.00;
        }else if(salary > 1500.00){
            tax = (1500.00*0.18) + tax;
            salary -= 1500.00;
        }

        if(salary>0){
            tax = (salary*0.28) + tax; 
        }
        printf("R$ %.2f\n",tax);
    }
    return 0;
}

*/


#include <stdio.h>
int main()
{
 
    float a, r, f1, f2, f3;
    scanf("%f", &a);
    if (a <= 2000.00)
    {
        printf("Isento\n");
    }
    else
    {
        if (a > 2000 && a <= 3000)
        {
 
            f1 = a - 2000;
            f1 = ((f1 * 8) / 100);
            r = f1;
            printf("R$ %0.2f\n", r);  // must be \n need 
        }
        else if (a > 3000 && a <= 4500)
        {
 
            f1 = a - 2000;
            f2 = f1 - 1000;
            f1 -= f2;
            f1 = ((f1 * 8)/100);   // f1 not 1000
            f2 = ((f2 *18)/100);   // f2 not 1500
            r = f1 + f2;
            printf("R$ %0.2f\n", r); // must be \n need
        }
        else
        {
            f1 = a - 2000;
            f2 = f1 - 1000;
            f3=f2-1500;
            f1-=f2;
            f2-=f3;
            f1 = ((f1 *8)/100);  // f1 not 1000
            f2 = ((f2 *18)/100);  // f2 not 1500
            f3 = ((f3*28)/100);
            r = f1 + f2 + f3;
            printf("R$ %0.2f\n", r);  // must be \n need
        }
    }
 
    return 0;
}