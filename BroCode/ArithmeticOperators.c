#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 11;
    int y = 5;

    printf("======CAST=======\n");

    float rez = x / y;
    printf("Rezultat %.2f\n", rez);
    
    rez = x / (float)y; //castovanje je neophodno da bismo izbegli celobrojno deljenje
    printf("Rezultat %.2f\n", rez);

    return 0;
}
