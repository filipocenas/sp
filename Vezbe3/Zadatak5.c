#include <stdio.h>
#include "operacije.h"

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Unesite a: ");
    scanf("%i", &a);
    printf("Unesite b: ");
    scanf("%i", &b);

    printf("a + b = %i\n", add(a, b));
    printf("a - b = %i\n", sub(a, b));
    printf("a * b = %i\n", mul(a, b));
    printf("a / b = %i\n", div(a, b));
    printf("a %% b = %i\n", mod(a, b));
    return 0;
}
