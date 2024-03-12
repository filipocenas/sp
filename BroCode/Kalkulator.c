#include <math.h>
#include <stdio.h>

void ispis(char c, double b1, double b2, double rez);

int main(int argc, char const *argv[])
{
    char operacija;
    double broj1;
    double broj2;
    double rez;

    printf("Unesite operaciju izvrsavanja: ");
    scanf("%c", &operacija);

    printf("Unesite prvi broj: ");
    scanf("%lf", &broj1);

    printf("Unesite drugi broj: ");
    scanf("%lf", &broj2);

   

    switch (operacija)
    {
    case '+':
        rez = broj1 + broj2;
        ispis(operacija, broj1, broj2, rez);
        break;
    case '-':
        rez = broj1 - broj2;
        ispis(operacija, broj1, broj2, rez);
        break;

    case '*':
        rez = broj1 * broj2;
        ispis(operacija, broj1, broj2, rez);
        break;
    
    case '/':
        rez = broj1 / broj2;
        ispis(operacija, broj1, broj2, rez);
        break;
    default:
        printf("Uneta operacija \'%c\' nije validna...", operacija);
        break;
    }

    return 0;
}

void ispis(char c, double b1, double b2, double rez)
{
    printf("Rezultat za operaciju \'%c\' nad brojevima %.1lf i %.1lf je: %.2lf", c, b1, b2, rez);
}