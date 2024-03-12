/*
Napisati program koji od korisnika učitava niz dužine n, a kao rezultat
izračunava i ispisuje matricu dimenzija N x N. 
Matrica se sastoji od sledećih vrsta: prva vrsta matrice su svi 
elementi niza pomnoženi sa prvim elementom niza, druga vrsta su 
svi elementi pomnoženi sa drugim elementom niza, treća sa trećim itd. 
Memoriju za matricu (kao i za niz) dinamički alocirati, ali koristiti 
za predstavljanje matrice samo jednostruki pokazivač.
*/

#include <stdio.h>
#include <stdlib.h>

void popuni_matricu(int*, int*, int);
void ispisi_matricu(int*, int);

int main(int argc, char const *argv[])
{
    printf("Unesite duzinu niza: ");
    int n;
    scanf("%i", &n);
    
    int* niz = malloc(n*sizeof(int));
    int* matrica = malloc(n * n * sizeof(int));

    for(int i = 0; i < n; i++) {
        printf("Unesite %i. element niza: ", (i + 1));
        scanf("%i", niz + i);
    }

    popuni_matricu(niz, matrica, n);

    printf("Dobijena matrica: \n");
    ispisi_matricu(matrica, n);
    return 0;
}

void popuni_matricu(int* niz, int* matrica, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            matrica[i * n + j] = niz[i] * niz[j];
        }
    }
}
void ispisi_matricu(int* matrica, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%i\t", matrica[i * n + j]);
        }
        printf("\n");
    }
}


