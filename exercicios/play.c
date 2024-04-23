#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[100];
    char ch[100];
    char c[100];
    scanf("%s\n", s);
    scanf("%[^\n]%*c", ch);
    scanf("%[^\n]%*c", c);

    printf("%s\n", s);
    printf("%s\n", ch);
    printf("%s", c);
    return 0;
}
