/*
#include <iostream>
using namespace std;

int main(){
    double n1,n2,n3,n4,media;
    cin>> n1>>n2>>n3>>n4;
    n1 *= 2; n2 *= 3; n3 *= 4; n4 *= 1;
    media = (n1+n2+n3+n4)/10;

    printf("Media %.1lf\n", media);

    if(media >= 7.0) {
        cout<<"Aluno aprovado."<<endl;
    }
    else if(media < 5.0 ) {
        cout<<"Aluno reprovado."<<endl;
    }else if(media >= 5.0 && media <7.0) {
        double n5,mediaFinaal;
        cout<<"Aluno em exame."<<endl;
        cin>> n5;
        printf("Nota do exame: %.1lf\n",n5);
        mediaFinaal = (media+n5)/2;
        if(mediaFinaal >= 5.0) cout<< "Aluno aprovado." <<endl;
        else if(mediaFinaal < 5.0) cout<< "Aluno reprovado." <<endl;
        printf("Media final: %.1lf\n",mediaFinaal);
    }

    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    double a, b, c, d, last, m;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    m = (a * 2 + b * 3 + c * 4 + d) / 10;
    printf("Media: %.1f\n", m);
    if (m >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if (m >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &last);
        printf("Nota do exame: %.1f\n", last);
        if (last + m / 2.0 > 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (last + m ) / 2.0);
    }
    else{
        printf("Aluno reprovado.\n");
    }
    return 0;
}*/

#include <stdio.h>
#include <iostream>


int main(){

    float a,b,c,d,e,media;

    std::cin >> a >> b >> c >> d;

    media = (a*2 + b*3 + c*4 + d*1)/(10.0);
    printf("Media: %.1f\n", media);

    if(media >= 7.0)
            std::cout << "Aluno aprovado.\n";
    if(media < 5.0)
            std::cout << "Aluno reprovado.\n";
    if(media >= 5.0 && media < 7.0){
            std::cout << "Aluno em exame.\n";
            std::cin >> e;
            printf("Nota do exame: %.1f\n", e);
                         if((media + e)/2.0 >= 5.0)
                                  std::cout << "Aluno aprovado.\n";
                         else
                           std::cout << "Aluno reprovado.\n";
                         printf("Media final: %.1f\n", (media + e)/2.0);
            }
    return 0;
}