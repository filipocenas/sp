#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char ime[25];
    int god;

    printf("Kako se zoves?\n");

    //scanf("%s", &ime);

    /*ako bismo ovde uneli i ime i prezime (sa razmakom)
    ispisalo bi se samo ime jer se scanf zaustavlja kod whitespace-a
    */

    fgets(ime, 25, stdin);
    ime[strlen(ime) - 1] = '\0';

    printf("Koliko imas godina?\n");
    scanf("%d", &god);

    printf("%s ima %d godina!\n", ime, god);
    return 0;
}
