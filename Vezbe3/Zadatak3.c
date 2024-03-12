/*
Napisati funkciju koja kao parametar prima string i za njega proverava da li je palindrom.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindrom(char []);
int jednako(char, char);

int main(int argc, char const *argv[])
{
    printf("Unesite string: ");
    char string [50];
    scanf("%s", &string);
    int pal = palindrom(string);

    pal ? printf("\"%s\" je palindrom.\n", string) : printf("\"%s\" nije palindrom.", string);
    return 0;
}


int palindrom(char s []) {
    for(int i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        if(s[i] == ' ')
            i++;
        if(s[j] == ' ')
            j--;
        if(!jednako(s[i], s[j]))
            return 0;
    }
    return 1;
}

int jednako(char c1, char c2) {
    if(c1 == c2)
        return 1;

    if(c1 == (c2 - 'a' + 'A'))
        return 1;

    if(c2 == (c1 - 'a' + 'A'))
        return 1;

    return 0;
}
