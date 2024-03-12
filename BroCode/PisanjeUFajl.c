#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    FILE *pF = fopen("test.txt", "w"); //write
    fprintf(pF, "Novi Sad\n");
    fclose(pF);

    pF = fopen("test.txt", "a"); //append
    fprintf(pF, "Beograd");
    fclose(pF);
    

    if(remove("test.txt") == 0)
    /* ne mozemo dobiti nista osim nule u ovoj situaciji, 
    jer se svakim pokretanjem programa kreira novi fajl...
    */
    {
        printf("Uspesno je izbrisan fajl.");
    }
    else
    {
        printf("Greska u brisanju fajla!");
    }

    return 0;
}
