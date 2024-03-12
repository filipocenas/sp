#include <stdio.h>
#include <math.h>

//korisnik unosi velicinu kateta a program vraca velicinu hipotenuze

int main(int argc, char const *argv[])
{
    double a, b;

    printf("Uneiste vrednost katete a: ");
    scanf("%lf", &a);

    printf("Unesite vrednost katete b: ");
    scanf("%lf", &b);

    double hipotenuza = sqrt(pow(a, 2) + pow(b, 2));

    printf("Duzina hipotenuze za unete vrednosti kateta je: %.2lf", hipotenuza);

    return 0;
}
