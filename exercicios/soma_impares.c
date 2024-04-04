#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    int X, Y, soma, troca;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &X, &Y);

    if (X > Y)
    {
        troca = X;
        X = Y;
        Y = troca;
    }
    
    soma = 0;
    for (int i = X+1; i < Y; i++)
    {
        if (i % 2 != 0)
        {
            soma = soma + i;
        }     
    }
    
    printf("\nSOMA DOS IMPARES = %d", soma);

    return 0;
}