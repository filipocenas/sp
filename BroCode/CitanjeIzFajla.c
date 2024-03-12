#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *pF = fopen("C:\\Users\\filip\\Desktop\\poem.txt", "r");
    if(pF == NULL) {
        perror("Greska u otvaranju fajla!");
        return 1;
    }
    
    char buffer[255];

    while(fgets(buffer, 255, pF) != NULL) 
    {
        printf("%s", buffer);
    }
    fclose(pF);

    return 0;
}
