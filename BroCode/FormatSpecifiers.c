#include <stdio.h>

int main(int argc, char const *argv[])
{

    //format specifiers

    float item1 = 5.55;
    float item2 = 50.555;
    const float ITEM3 = 100.99; //ne moze biti promenjena vrednost

    printf("Item 1: $%f\n", item1);
    printf("Item 2: $%-8.2f\n", item2);
    printf("Item 2: $%-.2f\n", item2);
    printf("Item 3: $%8.2f\n", ITEM3);
    return 0;
} 
