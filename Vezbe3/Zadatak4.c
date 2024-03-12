/*
Napisati funkciju koja kao parametar prima string i u prosleđenom
stringu menja sva mala slova u velika (aLiBaba → ALIBABA). Funkcija nema povratnu vrednost.
*/

#include <string.h>
#include <stdio.h>
#include <ctype.h>


void malaUVelika(char []);

int main(int argc, char const *argv[])
{
    printf("Unesite string: ");
    char str [50];
    scanf("%[^\n]", str);
    malaUVelika(str);    
    return 0;
}

void malaUVelika(char str []) {
    char rez [50];
    for(int i = 0; i < strlen(str); i++) {
        if(islower(str[i])) {
            rez[i] = toupper(str[i]);
        } else {
        rez[i] = str[i];
        }
    }
    rez[strlen(str)] = '\0';
    printf("%s ---> %s", str, rez);
}
