#include <stdio.h>
#include <string.h>

typedef char ime[12];

/*koristeci typedef nad struct-om nemamo
potrebu da svaki put pisemo kljucnu rec struct kad
zelimo da koristimo strukturu igrac, vec mozemo samo
pisati Igrac kao kad bismo pisali ime klase u javi npr.
*/
typedef struct
{
    ime ime;
    int rezultat;
} Igrac;

void stampajIgraca(Igrac igrac)
{
    printf("%s: %d\n", igrac.ime, igrac.rezultat);
}

//zvezdica oznacava pointer - pokazivac u strukturi
void upisiIgraca(Igrac *igrac, const char ime [12], int rez)
{
    strcpy(igrac->ime, ime);
    igrac->rezultat = rez;
}

int main(int argc, char const *argv[])
{
    Igrac igrac1;
    Igrac igrac2;

    /*moramo koristiti & znak za adresiranje, 
    u suprotnom ne bi se updateovali podaci...
    */
    upisiIgraca(&igrac1, "Filip", 4);
    upisiIgraca(&igrac2, "Mina", 5);

    stampajIgraca(igrac1);
    stampajIgraca(igrac2);

    
    return 0;
}
