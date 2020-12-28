#include <stdio.h>
int main(){
    float a,b,c,d,avg,f;
    scanf("%f%f%f%f", &a,&b,&c,&d);
    a *= 2;
    b *= 3;
    c *= 4;
    d *= 1;
    avg = (a+b+c+d) / 10;

    if(avg >= 7){
        printf("Media: %.1f\nAluno aprovado. \n",avg);
    }else if(avg < 5){
        printf("Media: %.1f\nAluno reprovado. \n",avg);
    }else if(avg >= 5 && avg < 7){
        printf("Media: %.1f\nAluno em exame. \n",avg);
        scanf("%f", &f);
        printf("Nota do exame: %.1f\n",f);
        avg = (avg+f) / 2;
        if(avg >= 5){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n",avg);

    }
    return 0;
}