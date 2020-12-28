/*
#include <iostream>
using namespace std;

int main(){
    float Salary;
    cin>> Salary;

    if(Salary >=0 && Salary <= 400){
        float per = Salary*0.15;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\n",Salary+per,per);
        cout<< "Em percentual: 15 %" <<endl;
    }else if(Salary >=400.01 && Salary <= 800){
        float per = Salary*0.12;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\n",Salary+per,per);
        cout<< "Em percentual: 12 %" <<endl;
    }else if(Salary >=800.01 && Salary <= 1200){
        float per = Salary*0.10;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\n",Salary+per,per);
        cout<< "Em percentual: 10 %" <<endl;
    }else if(Salary >=1200.01 && Salary <= 2000){
        float per = Salary*0.07;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\n",Salary+per,per);
        cout<< "Em percentual: 7 %" <<endl;
    }else if(Salary >=1200.01 && Salary <= 2000){
        float per = Salary*0.07;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\n",Salary+per,per);
        cout<< "Em percentual: 7 %" <<endl;
    }else if(Salary >2000){
        float per = Salary*0.04;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\n",Salary+per,per);
        cout<< "Em percentual: 4 %" <<endl;
    }
    return 0;
}

*/


#include <iostream>
using namespace std;

int main(){
    float salary,bonus,finalSalary;
    short int percentage;
    cin>> salary;

    if(0 <= salary && salary <= 400.00){
        percentage = 15;
        bonus = (salary*percentage)/100;
        finalSalary = salary+bonus;
    }else if(400.00 < salary && salary <= 800.00){
        percentage = 12;
        bonus = (salary*percentage)/100;
        finalSalary = salary+bonus;
    }else if(800.00 < salary && salary <= 1200.00){
        percentage = 10;
        bonus = (salary*percentage)/100;
        finalSalary = salary+bonus;
    }else if(1200.00 < salary && salary <= 2000.00){
        percentage = 7;
        bonus = (salary*percentage)/100;
        finalSalary = salary+bonus;
    }else if( salary > 2000.00){
        percentage = 4;
        bonus = (salary*percentage)/100;
        finalSalary = salary+bonus;
    }

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",finalSalary,bonus,percentage);
    return 0;
}
