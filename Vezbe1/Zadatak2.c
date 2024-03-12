/*
Napisati program koji za dve unete tačke u ravni račina distancu
izmeđunjih (koordinate su realni brojevi)
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float x1, x2, y1, y2;
    printf("Unesite x1: \n");
    scanf("%f", &x1);

    printf("Unesite y1: \n");
    scanf("%f", &y1);

    printf("Unesite x2: \n");
    scanf("%f", &x2);

    printf("Unesite y2: \n");
    scanf("%f", &y2);
    

    float distanca = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    printf("Distanca izmedju dve tacke je: %0.2f", distanca);

    
    return 0;
}
