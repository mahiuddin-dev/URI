// #include <stdio.h>

// int main(){
//     char name[50];
//     double salary,d;
//     scanf("%s", name);
//     scanf("%lf %lf", &salary, &d);
//     // printf("TOTAL = R$ %.2lf\n",salary+((d/100)*15));
//     printf("TOTAL = R$ %.2lf\n",salary+(d*0.15));
//     return 0;
// }


#include <stdio.h>

int main(){
    char name[50];
    double saller_salary, total_value_sold, final_salary;
    scanf("%s", name);
    scanf("%lf %lf", &saller_salary, &total_value_sold);
    final_salary = saller_salary + ((total_value_sold*15) / 100);
    printf("TOTAL = R$ %.2lf\n",final_salary);
    return 0;
}