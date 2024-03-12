#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int rows;
    int columns = 0;
    char symbol;

    printf("Unesite broj kolona: ");
    scanf("%d", &columns);

    printf("Unesite broj redova: ");
    scanf("%d", &rows);

    //ciscenje buffera
    while(getchar() != '\n');

    printf("Unesite zeljeni simbol: ");
    scanf("%c", &symbol);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
    return 0;
}
