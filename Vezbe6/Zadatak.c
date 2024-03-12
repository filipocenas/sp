void ucitaj_cene(float**, int);
float** izdvoj(float**, int, float, int (*)(float, float));
int veci_od(float, float);
int manji_od(float, float);
void uvecaj(float*, float);
void umanji(float*, float);
void modifikuj_vrednost(float**, float, void (*)(float*, float));

#include <stdio.h>
#include <stdlib.h>

int duzina_niza = 0;

int main(int argc, char const *argv[])
{
    printf("Unesite dimenzije matrice: ");
    int n;
    scanf("%d", &n);
    float** matrica = malloc(n * sizeof(float*));
    for(int i = 0; i < n; i++) {
        matrica[i] = malloc(n * sizeof(float));
    }
    ucitaj_cene(matrica, n);
    int opcija;

    do {
        printf("Unesite 0 za uvecanje ili 1 za umanjenje: ");
        scanf("%d", &opcija);
    } while(opcija != 0 && opcija != 1);

    printf("Unesite cenu za uporedjivanje: ");
    float cena;
    scanf("%f", &cena);
    printf("Unesite procenat: ");
    float procenat;
    scanf("%f", &procenat);

    float** niz;

    if(!opcija) {
        niz = izdvoj(matrica, n, cena, manji_od);
        modifikuj_vrednost(niz, procenat, uvecaj);
    } else {
        niz = izdvoj(matrica, n, cena, veci_od);
        modifikuj_vrednost(niz, procenat, umanji);
    }

    printf("Krajnji rezultat:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%f\t", matrica[i][j]);
        }
        printf("\n");
    }

    free(niz);
    for(int i = 0; i < n; i++) {
        free(matrica[i]);
    }
    free(matrica);
    
    return 0;
}

void ucitaj_cene(float** matrica, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("Unesite element matrice na poziciji [%i][%i]: ", i, j);
            scanf("%f", &matrica[i][j]);
        }
    }
}
/*
izdvoj koja kao argumente prima matricu, realan broj sa kojim se elementi matrice 
porede i pokazivač na funkciju koja vraća vrednost tipa int, a kao parametre prima 
dve vrednosti realnog tipa; 
funkcija vraća niz pokazivača na vrednosti za koje funkcija koja je argument vraća vrednost 1; 
u povratnom nizu postaviti reference na konkretne elemente matrice(ne kopirati vrednost); 
dužinu niza izdvojenih elemenata čuvati kao globalnu promenljivu a niz alocirati dinamički;
*/
float** izdvoj(float ** matrica, int n, float broj, int (*fun)(float, float)) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(fun(matrica[i][j], broj)) {  //ako funkcija ovde vrati 1 znaci ce
                duzina_niza++;              // biti true i povecava se duzina niza
            }                               // koji treba da vratimo
        }
    }


    
    float** ret_niz = malloc(duzina_niza * sizeof(float*));

    int k = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(fun(matrica[i][j], broj)) {
                ret_niz[k] = &matrica[i][j];
                k++;
            }
        }
    }

    return ret_niz;
}

int veci_od(float b1, float b2) {
    return b1 > b2 ? 1 : 0;
}

int manji_od(float b1, float b2) {
    return b1 < b2 ? 1 : 0;
}

void uvecaj(float* vr, float procenat) {
    (*vr) += (*vr) * procenat / 100.00;
}

void umanji(float* vr, float procenat) {
    (*vr) -= (*vr) * procenat / 100.00;
}

void modifikuj_vrednost(float** niz, float procenat, void(*fun)(float*, float)) {
    for(int i = 0; i < duzina_niza; i++) {
        fun(niz[i], procenat);
    }
}
