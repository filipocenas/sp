#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    const int MIN = 1;
    const int MAX = 100;
    int pokusaj;
    int pokusaji = 0;
    
    srand(time(0));
    
    int resenje = (rand() % MAX) + MIN;

    printf("Izaberite broj izmedju %d i %d: ", MIN, MAX);
    do
    {
        scanf("%d", &pokusaj);
        if(pokusaj < resenje)
        {
            printf("Unesite veci broj... \n");
        } 
        else if (pokusaj > resenje)
        {
            printf("Unesite manji broj... \n");
        }
        else{
            printf("TACNO!\n");
        }
        pokusaji++;
    } while (pokusaj != resenje);
    
    printf("***********************\n");
    printf("Resenje: %d\n", resenje);
    printf("Broj pokusaja: %d\n", pokusaji);
    printf("***********************");

    return 0;
}
