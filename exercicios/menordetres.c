#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    int a, b, c, menor;

    printf("Primeiro vlor: ");
    scanf("%d", &a);
    printf("Primeiro vlor: ");
    scanf("%d", &b);
    printf("Primeiro vlor: ");
    scanf("%d", &c);

    if (a < b && a < c)
    {
        menor = a;
    }
    else if (b < c) {
        menor = b;
    }
    else {
        menor = c;
    } 
    
    printf("\nMENOR = %d\n", menor);
    
    return 0;
}