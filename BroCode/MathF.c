#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14);

    // zaokruzuje na vecu vrednost
    int D = ceil(3.14);

    //zaokruzuje na manju vrednost
    int E = floor(3.99);

    double F = fabs(-100);
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("\n%d", C);

    return 0;
}
