#include <stdio.h>

int main() {

    int N, cont;
    double media, soma, porcentagem;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    int idade[N];
    double altura[N];
    char nome[N][50];

    for (int i = 0; i < N; i++)
    {
        printf("Dados da %da pessoa: \n", i + 1);
        printf("Nome: ");
        scanf("%s", &nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }

    soma = 0;
    for (int i = 0; i < N; i++)
    {
        soma = soma + altura[i];
    }
    media = soma / N;
    printf("\nAltura media: %.2lf\n", media);
    
    cont = 0;
    for (int i = 0; i < N; i++)
    {
        if (idade[i] < 16)
        {
            cont++;
        }  
    }
    porcentagem = cont * 100.0 / N;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", porcentagem);

    for (int i = 0; i < N; i++)
    {
        if (idade[i] < 16)
        {
            printf("%s\n", nome[i]);
        }   
    } 

    return 0;
}