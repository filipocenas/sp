/*
Napisati program koji konvertuje sve temperature u nekom
intervalu date u Farenhajtima u temperaturu izraženu u stepenima
Celzijusa sa korakom 20°F.
Testirati na intervalu od 0°F do 300°F
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Unesite donju granicu:");
    float donja_gr;
    scanf("%f", &donja_gr);

    printf("Unesite gornju granicu:");
    float gornja_gr;
    scanf("%f", &gornja_gr);

    printf("F\tC\n");
    for(float i = donja_gr; i <= gornja_gr; i += 20) {
        printf("%.1f\t%.1f\n", i, (5.0/9.0)*(i - 32.0));
    }
    return 0;
}
