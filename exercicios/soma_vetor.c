#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    int N;
    double soma, media; 

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for (int i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }
    printf("\n");
    
    soma = 0;
    printf("\nVALORES = ");
    for (int i = 0; i < N; i++)
    {
        printf("%.1lf ", vet[i]);
        soma = soma + vet[i];
    }

    media = soma / N;
    printf("SOMA = %.2lf\n", soma);
    printf("MEDIA = %.2lf\n", media);

    return 0;
}