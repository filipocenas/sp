/*
Napisati funkciju void ucitaj(int* niz, int n) koja u promenljivu niz dužine n
učitava elemente niza od korisnika. Zatim, napisati funkciju void ispisi_obrnuto(int*
niz, int n) koja ispisuje prosleđen niz dužine n u obrnutom poretku. U main funkciju
pitati korisnika za dužinu niza, dinamički alocirati potrebnu memoriju za niz, pozvati
funkciju ucitaj i zatim ispisati učitane elemente funkcijom ispisi_obrnuto
*/
#include <stdio.h>
#include <stdlib.h>
void ucitaj(int*, int);
void ispisi_obrnuto(int*, int);
int main(int argc, char const *argv[])
{
    printf("Unesite duzinu niza: ");
    int n;
    scanf("%i", &n);
    int* niz = malloc(n * (sizeof(int)));
    ucitaj(niz, n);
    ispisi_obrnuto(niz, n);
    free(niz);
    return 0;
}

void ucitaj(int* niz, int n) {
    for(int i = 1; i <= n; i++) {
        printf("Unesite %i. element niza: ", i);
        scanf("%i", niz + (i - 1));
    }
}

void ispisi_obrnuto(int* niz, int n) {
    printf("Obrnuto ispisan niz: \n");
    for(int i = n - 1; i >= 0; i--) {
        printf("%i ", niz[i]);
    }
    printf("\n");
}
