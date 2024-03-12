
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    const double PI = 3.14159;
    double poluprecnik;
    double obim;
    double povrsina;
    
    printf("\nUnesite poluprecnik kruga: ");
    scanf("%lf", &poluprecnik);

    obim = 2 * PI * poluprecnik;
    povrsina = pow(poluprecnik, 2) * PI;

    printf("Obim: %.2lf\n", obim);
    printf("Povrsina: %.2lf\n", povrsina);



    return 0;
}
