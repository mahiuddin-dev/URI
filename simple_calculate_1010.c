#include <stdio.h>

int main(){
    unsigned int product1,product_1_Number,product2,product_2_Number;
    double product_1_Price,product_2_Price;
    scanf("%d%d%lf", &product1,&product_1_Number,&product_1_Price);
    scanf("%d%d%lf", &product2,&product_2_Number,&product_2_Price);

    product_1_Price *= (double) product_1_Number;
    product_2_Price *= (double) product_2_Number;

    printf("VALOR A PAGAR: R$ %.2f\n", product_1_Price+product_2_Price);
    return 0;
}