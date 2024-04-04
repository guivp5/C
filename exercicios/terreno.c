#include <stdio.h>

int main() {

    double larg, comp, valor, area, price; 

    printf("======= MENU =======\n");1

    printf("\nDigite a largura do terreno: ");
    scanf("%lf", &larg);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comp);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor);

    area = larg * comp;
    price = valor * area;

    printf("\nArea do terreno = %.2lf\n", area);
    printf("Preco do terreno = %.2lf\n", price);
    
    printf("\n======= FIM MENU =======");

    return 0;   
}