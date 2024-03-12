#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char pitanja [][100] = {"Sta oznacava kljucna rec \"printf\" u programskom jeziku C?",
                            "Kako se deklarise celobrojni niz (array) u jeziku C?",
                            "Koji operator se koristi za dinamicko dodeljivanje memorije u jeziku C?"};

    char opcije [][100] = {"a) Unos podataka", "b) Ispis podataka", "c) Matematičke operacija", "d) Petlje",
                            "a) float myArray[size]", "b) int myArray[size]", "c) array myArray[size]", "d) char myArray[size]", 
                            "a) malloc", "b) allocate", "c) new", "d) create"};

    char odgovori [3] = {'B', 'B', 'A'};
    int brojPitanja = sizeof(pitanja)/sizeof(pitanja[0]);
    
    char odgovor;
    int brojTacnihOdgovora = 0;
    

    for(int i = 0; i < brojPitanja; i++)
    {
        printf("*******************\n");
        printf("%s\n", pitanja[i]);
        printf("*******************\n");

        for(int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", opcije[j]);
        }

        printf("Pokusaj: ");
        do
        {
            scanf(" %c", &odgovor);
            while (getchar() != '\n');
            odgovor = toupper(odgovor);
            if(odgovor != 'A' && odgovor != 'B' && odgovor != 'C')
            {
                printf("Unesite 'A', 'B' ili 'C': ");
            }
        } while (odgovor != 'A' && odgovor != 'B' && odgovor != 'C');
        
        

        if(odgovor == odgovori[i])
        {
            printf("TACNO!\n");
            brojTacnihOdgovora++;
        } else {
            printf("NETACNO!\n");
        }
    }

    printf("*******************\n");
    printf("Krajnji rezultat: %d/%d\n", brojTacnihOdgovora, brojPitanja);
    printf("*******************\n");

    return 0;
}
