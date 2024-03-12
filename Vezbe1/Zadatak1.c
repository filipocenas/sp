/*
Napisati program koji za unetu količinu novca (ceo broj) računa nakoji
način je najpogodnije izvršiti isplatu tako da se dobije najmanji broj
novčanica. Novčanice postoje u apoenima od 100, 50, 20, 10, 5, 2 i 1
*/

#include <stdio.h>

int main()
{
    int svota;
    printf("Unesite svotu...");
    scanf("%d", &svota);

    int kolicnik = svota / 100;
    int ostatak = svota % 100;

    printf("Potrevno je %i novcanica od 100.\n", kolicnik);
    
    kolicnik = ostatak / 50;
    ostatak %= 50;

    printf("Potrevno je %i novcanica od 50.\n", kolicnik);

    
    kolicnik = ostatak / 20;
    ostatak %= 20;

    printf("Potrevno je %i novcanica od 20.\n", kolicnik);

    
    kolicnik = ostatak / 10;
    ostatak %= 10;

    printf("Potrevno je %i novcanica od 10.\n", kolicnik);
    
    kolicnik = ostatak / 5;
    ostatak %= 5;

    printf("Potrevno je %i kovanica od 5.\n", kolicnik);

    
    kolicnik = ostatak / 2;
    ostatak %= 2;

    printf("Potrevno je %i kovanica od 2.\n", kolicnik);
    printf("Potrevno je %i kovanica od 1.\n", ostatak);

    return 0;
}
