#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    double N, media, soma, cont;

    printf("Digite as idades: \n");
    scanf("%lf", &N);

    cont = 0;
    soma = 0;
    if (N > 0)
    {
       while (N >= 0)
       {
            soma = soma + N;
            cont = cont + 1;
            scanf("%lf", &N);
       }
        
        media = soma / cont;
        printf("\nMEDIA = %.2lf\n", media);

    } 
    else
    {
        printf("\nIMPOSSIVEL CALCULAR\n");
    }

    return 0;
}