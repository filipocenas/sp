/*
Napisati funkciju void ucitaj(float** matrica, int n, int m) koja učitava elemente
matrice sa n vrsta i m kolona; koristiti pokazivačku aritmetiku za iteriranje kroz
matricu. Zatim, napisati funkciju float* maksimumi(float** matrica, int n, int m)
koja vraća niz koji čine najveći elementi svake vrste. U main funkciji pitati korisnika
za dimenzije matrice, dinamički alocirati memoriju za matricu, učitati je i zatim
ispisati maksimume po vrstama.
*/

#include <stdio.h>
#include <stdlib.h>

void ucitaj(float**, int, int);
float* maksimumi(float**, int, int);
/*
U main funkciji pitati korisnika
za dimenzije matrice, dinamički alocirati memoriju za matricu, učitati je i zatim
ispisati maksimume po vrstama.
*/
int main(int argc, char const *argv[])
{
    int n, m;
    printf("Unesite broj redova: ");
    scanf("%i", &n);
    printf("Unesite broj kolona: ");
    scanf("%i", &m);

    float** matrica = malloc(n * (sizeof(float*)));
    for(int i = 0; i < n; i++) {
        matrica[i] = malloc(m * sizeof(float));
    }

    ucitaj(matrica, n, m);

    float* niz_max = maksimumi(matrica, n, m);
    printf("%-20s", "Niz maksimuma:");
    for(int i = 0; i < n; i++) {
        printf("(%.1f) ", niz_max[i]);
    }
    printf("\n");

    free(niz_max);
    for(int i = 0; i < n; i++) {
        free(matrica[i]);
    }

    free(matrica);

    return 0;
}

void ucitaj(float** matrica, int n, int m) {
    printf("====UNESITE ELEMENTE MATRICE====\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("Element na poziciji [%i][%i]: ", i, j);
            scanf("%f", *(matrica + i) + j);
        }
    }
}
/*
Zatim, napisati funkciju float* maksimumi(float** matrica, int n, int m)
koja vraća niz koji čine najveći elementi svake vrste.
*/
float* maksimumi(float** matrica, int n, int m) {
    float* ret_niz = malloc(n * sizeof(float));
    for(int i = 0; i < n; i++) {
        float max = matrica[i][0];
        for(int j = 1; j < m; j++) {
            if(max < matrica[i][j]) {
                max = matrica[i][j];
            }
        }
        ret_niz[i] = max;
    }
    return ret_niz;
}
