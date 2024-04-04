#include <stdio.h>
#include <math.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
} 

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
} 

int main() {

    int idade1, idade2;
    double media;
    char nome1[50], nome2[50];

    printf("Dados da primeira pessoa: \n");
    printf("Idade: ");
    scanf("%d", &idade1);
    printf("Nome: ");
    limpar_entrada();
    ler_texto(nome1, 50);

    printf("Dados da segunda pessoa: \n");
    printf("Idade: ");
    scanf("%d", &idade2);
    printf("Nome: ");
    limpar_entrada();
    ler_texto(nome2, 50);

    media = (double) (idade1 + idade2) / 2;

    printf("\nA idade media de %s e %s eh de %.1lf anos.\n", nome1, nome2, media);

    return 0;
}