#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b;
    float sum, dif, c, d;
    
    sum = 0;
    dif = 0;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    sum = a + b;
    dif = a - b;
    printf("%.0f %.0f\n", sum, dif);
    sum = 0;
    dif = 0;
    sum = c + d;
    dif = c - d;
    printf("%.1f %.1f\n", sum, dif);
    
    return 0;
}