/*
Napisati program koji od korisnika učitava matricu, izdvaja iz nje elemente koji
zadovoljavaju određeni uslov, a zatim primenjuje na te elemente operaciju po
korisnikovom izboru. Program treba da sadrži sledeće funkcije:
    * Ucitaj: koja kao argumente prima ceo broj n i matricu realnih brojeva dimenzija
    N x N i popunjava je vrednostima koje korisnik unosi; 
    Funkcija nema povratnu vrednost

    * Izdvoj: koja iz matrice izdvaja u niz sve elemente marice koji su veći od 20.0;
    Funkcija kao povratnu vrednost vraća niz elemenata

    * Saberi: koja sabira vrednosti prosleđena dva parametra koji su realni brojevi, a
    kao rezultat vraća rezultat sabiranja

    * Oduzmi koja ima iste parametre kao funkcija saberi a kao rezultat vraća rezultat
    oduzimanja

    * Operacija: koja kao parametre prima niz, dužinu niza i pokazivač na funkciju;
    Prosleđenu operaciju primenjuje na trenutnu vrednost (koja je na početku 0.0) i
    sledeći element u nizu; 
    Funkcija kao rezultat vraća ukupan rezultat operacije

    * Main: koja učitava matricu od korisnika, nad matricom poziva funkciju izdvoj, 
    zatim pita korisnika za operaciju koju želi da primeni i primenjuje tu operaciju na
    izdvojen niz. Dinamički alocirati memoriju za matricu i sve potrebne
    promenljive.
*/

#include <stdio.h>
#include <stdlib.h>

void ucitaj(int, float**) ;
float* izvdvoj(float**, int ); 
float saberi(float, float);
float oduzmi(float, float);
float operacija(float*, float (float, float));


/*
    Main: koja učitava matricu od korisnika, nad matricom poziva funkciju izdvoj, 
    zatim pita korisnika za operaciju koju želi da primeni i primenjuje tu operaciju na
    izdvojen niz. Dinamički alocirati memoriju za matricu i sve potrebne
    promenljive.
*/
int main(int argc, char const *argv[])
{
    printf("Unesite dimenziju matrice: ");
    int n;
    scanf("%i", &n);
    
    float** matrica = malloc(n * sizeof(float*));
    for(int i = 0; i < n; i++) {
        matrica[i] = malloc(n * sizeof(float));
    }
    
    ucitaj(n, matrica);
    float* niz = izvdvoj(matrica, n);

    char c = '\0';
    do {
        printf("Unesite \'+\' ako zelite operaciju saberi.\n");
        printf("Unesite \'-\' ako zelite operaciju oduzmi.\n");
        printf("Vas izbor: ");
        scanf(" %c", &c);
    } while (c != '+' && c != '-');

    float rez;

    switch (c)
    {
    case '+':
        rez = operacija(niz, saberi);
        break;
    
    case '-':
        rez = operacija(niz, oduzmi);
        break;

    default:
        printf("Unos nije validan!");
        break;
    }

    printf("Rezultat je %f\n", rez);

    free(niz);

    for(int i = 0; i < n; i++) {
        free(matrica[i]);
    }

    free(matrica);

    return 0;
}

/*
    Ucitaj: koja kao argumente prima ceo broj n i matricu realnih brojeva dimenzija
    N x N i popunjava je vrednostima koje korisnik unosi; 
    Funkcija nema povratnu vrednost
*/
void ucitaj(int n, float** matrica) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("Unesite vrednost na poziciji [%i][%i]: ", i, j);
            scanf("%f", *(matrica+i) + j);
        }
    }
}

/*
    Izdvoj: koja iz matrice izdvaja u niz sve elemente marice koji su veći od 20.0;
    Funkcija kao povratnu vrednost vraća niz elemenata
*/

float* izvdvoj(float** matrica, int n) {
    int broj_elem = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matrica[i][j] > 20.0) {
                broj_elem++;
            }
        }
    }

    float* niz = malloc(broj_elem * sizeof(float));

    int niz_br = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matrica[i][j] > 20.0) {
                niz[niz_br] = matrica[i][j];
                niz_br++;
            }
        }
    }

    return niz;

}

float saberi(float b1, float b2) {
    return b1 + b2;
}
float oduzmi(float b1, float b2) {
    return b1 - b2;
}

/*
    Operacija: koja kao parametre prima niz, dužinu niza i pokazivač na funkciju;
    Prosleđenu operaciju primenjuje na trenutnu vrednost (koja je na početku 0.0) i
    sledeći element u nizu; 
    Funkcija kao rezultat vraća ukupan rezultat operacije
*/

float operacija(float* niz, float (*fun)(float, float)) {
    float trenutno = 0.0;
    for(int i = 0; i < sizeof(niz)/sizeof(niz[i]); i++) {
        trenutno += fun(trenutno, niz[i]);
    }
    return trenutno;
}
