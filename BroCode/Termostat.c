#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char jedinica;
    float temp;

    printf("\nDa li je temperatura u (F) ili (C)? ");
    scanf("%c", &jedinica);

    jedinica = toupper(jedinica);

    if(jedinica == 'C') {
        printf("Temperatura je izrazena u celzijusima...\n");
        printf("Unesite temperaturu u celzijusima: ");
        scanf("%f", &temp);
        temp = (temp) * 9 / 5 + 32;
        printf("Uneta temperatura u farenhajtima je %.1f", temp);
    }

    else if (jedinica == 'F') {
        printf("Temperatura je izrazena u farenhajtima...\n");
        printf("Unesite temperaturu u farenhajtima: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("Uneta temperatura u celzijusima je: %.1f", temp);
    }

    else {
        printf("\n %c nije validna jedinica mere", jedinica);
    }
    

    return 0;
}
