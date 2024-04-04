#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    double nota1, nota2, notaFinal;

    printf("Digite a primeria nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    notaFinal = nota1 + nota2;

    printf("\nNOTA FINAL = %.1lf\n", notaFinal);
    if (notaFinal < 70.0)
    {
        printf("== REPROVADO ==");
    } else {
        printf("-- APROVADO --");
    }
    
    return 0;
}