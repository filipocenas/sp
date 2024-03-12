/*
Napisati funkciju void stat(int* niz, int n, int* min, int* max, float* avg) koja za
prosleđen niz dužine n određuje minimalni element niza, maksimalni element niza i
prosečnu vrednost elemenata niza i smešta rezultate redom u promenljive min, max i
avg. Niz učitati od korisnika (prvo pitati za dužinu, dinamički alocirati memoriju za
niz) i rezultate ispisati na ekran.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void stat(int*, int, int*, int*, float*);

int main(int argc, char const *argv[])
{
    int n;
    printf("Unesite velicinu niza: ");
    scanf("%i", &n);
    
    int* niz = malloc(n * sizeof(int));
    for(int i = 1; i <= n; i++) {
        printf("Unesite %i. element niza: ", i);
        scanf("%i", niz + (i - 1));
    }
    int min, max;
    float avg;
    stat(niz, n, &min, &max, &avg);

    printf("%-30s%i\n", "Najmanji element niza je:", min);
    printf("%-30s%i\n", "Najveci element niza je:", max);
    printf("%-30s%.2f\n", "Srednja vrednost niza je:", avg);

    return 0;
}

void stat(int* niz, int n, int* min, int* max, float* avg) {
    *min = INT_MAX;
    *max = INT_MIN;
    *avg = 0;
    for(int i = 0; i < n; i++) {
        if(*min > niz[i]) {
            *min = niz[i];
        }

        if(*max < niz[i]) {
            *max = niz[i];
        }
        *avg += niz[i];
    }
    *avg /= n;
}



