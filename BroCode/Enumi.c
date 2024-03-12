#include <stdio.h>

enum Dan {Pon = 1, Uto = 2, Sre = 3, Cet = 4, Pet = 5, Sub = 6, Ned = 7};

int main(int argc, char const *argv[])
{
    enum Dan danas = Pon;

    printf("%d", danas);

    return 0;
}
