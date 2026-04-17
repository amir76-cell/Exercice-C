#include <stdio.h>
#include <uchar.h>

int main(void)
{
    printf("Taille d'un int : %zu\n", sizeof(int));
    printf("Taille d'un long long : %zu\n", sizeof(long long));
    printf("Taille d'un short : %zu\n", sizeof(short));
    printf("Taille d'un char16_t : %zu\n", sizeof(char16_t));

    return 0;
}