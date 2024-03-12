/*
Napisati funkciju koja kao argumente prima niz celih brojeva (pokazivač na prvi
element), dužinu niza i niz pokazivača (iste dužine) i sortira prosleđeni niz celih
brojeva tako što postavlja elemente niza pokazivača da pokazuju na odgovarajuće
elemente u nizu brojeva (prvi element niza pokazivača pokazuje na najmanji element
niza celih brojeva, drugi element na sledeći najmanji itd.). Funkcija nema povratnu
vrenost i ne sme da promeni originalni niz. Korisniku ispisati sortiran niz brojeva.
*/
#include <stdio.h>

void sort(int*, int, int**);

int main(int argc, char const *argv[])
{
    printf("Unesite duzinu niza: ");
    int n;
    scanf("%i", &n);

    int niz[n];
    int* niz_pokazivaca[n];

    for(int i = 0; i < n; i++) {
        printf("Unesite %i. element niza: ", (i + 1));
        scanf("%i", niz + i);
        niz_pokazivaca[i] = niz + i;
    }

    printf("Niz pokazivaca pre sortiranja: \n");
    for(int i = 0; i < n; i++) {
        printf("%i\t", *niz_pokazivaca[i]);
    }
    printf("\n");

    sort(niz, n, niz_pokazivaca);

    printf("Niz brojeva nakon sortiranja: \n");
    for(int i = 0; i < n; i++) {
        printf("%i\t", niz[i]);
    }
    printf("\n");

    printf("Niz pokazivaca nakon sortiranja: \n");
    for(int i = 0; i < n; i++) {
        printf("%i\t", *niz_pokazivaca[i]);
    }
    printf("\n");
    return 0;
}

void sort(int * niz, int n, int** niz_pok) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1; j++) {
            if(*niz_pok[j] > *niz_pok[j + 1]) {
                int * temp = niz_pok[j];
                niz_pok[j] = niz_pok[j + 1];
                niz_pok[j + 1] = temp;
            }
        }
    }
}




